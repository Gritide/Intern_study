class Solution {
public:
//O(n*k)
    void rotate(vector<int>& nums, int k) {
         if ((k <= 0))
            {
                return;
            }
            
            // Make a copy of nums
            vector<int> numsCopy;
            for (int i = 0; i < nums.size(); i++)
            {
                numsCopy[i] = nums[i];
            }
            
            // Rotate the elements.
            for (int i = 0; i < nums.size(); i++)
            {
                nums[(i + k)%nums.size()] = numsCopy[i];
            }
    }
};