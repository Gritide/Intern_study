/*Time Complexity
O(nlogn) where n is the input size of the vector.

Space Complexity
O(1) Since we are not using any extra space to compute our result.*/

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int max1 = nums[0] * nums[1];
    int max2 = nums[n - 1] * nums[n - 2];

    return max(max1, max2);
}