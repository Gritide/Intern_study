/* O(n^2)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //handle the size
        bool temp=false;
        if(nums.size()==0 && nums.size()==1)
        {
            return temp;
        }
        sort(nums.begin(),nums.end());
        else{
            for(int i=0;i<nums.size()-1;i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[i]==nums[j])
                    {
                        temp=true;
                            break;
                    }
                }
            }
            return temp;
        }
        //itterate throgh loop
            //itterate again
    } 
};*/
//O(nlogn)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //handle the size
        bool temp=false;
        if(nums.size()==0 && nums.size()==1)
        {
            return temp;
        }
        sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++)
            {

                    if(nums[i]==nums[i+1])
                    {
                        temp=true;
                            break;
                    }
                
            }
            return temp;

        //itterate throgh loop
            //itterate again
    } 
};
/*# https://leetcode.com/problems/contains-duplicate/

# Linear Search method
# O(n^2) time | O(1) space
class Solution_1(object):
    def containsDuplicate(self, nums):
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] == nums[j]:
                    return True
        return False

# sort() approach --> fastest w/o data structure
# O(n log n) time | O(1) space
class Solution_2(object):
    def containsDuplicate(self, nums):
        nums.sort()
        # loop until len of nums - 1 in order to properly compare nums[i] == nums[i + 1]
        for i in range(len(nums) - 1):
            if nums[i] == nums[i + 1]:
                return True
        return False

# Hash table approach
# O(n) time | O(n) space
class Solution_3(object):
    def containsDuplicate(self, nums):
        # Hash table is used to keep track of the values of nums during the loop
        hash_nums = {}
        for i in nums:
            if i not in hash_nums:
                hash_nums[i] = "checked"
            else:
                return True
        return False

# Python solution 
# O(n) time | O(n) space
class Solution_3(object):
    def containsDuplicate(self, nums):
        return len(nums) != len(set(nums))*/