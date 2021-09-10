#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
//O(n)
vector<int> xd(vector<int>nums, int goal)
{
    /*vector<int> new_vec;
    int start=0;
    int end=nums.size()-1;
    
    //check whether we have a input or not and size
    if(nums.size()==0)
    {
        new_vec;
    }
    else{
        while(start!=end)
        {
            if(nums[start]+nums[end]>goal)
            {
                end--;
            }
            else if(nums[start]+nums[end]<goal)
            {
                start++;
            }
            else if(nums[start]+nums[end]==goal)
            {
                new_vec.push_back(nums[start]);
                new_vec.push_back(nums[end]);
                break;
            }
            
            
        }

    }
    for(int i=0;i<new_vec.size();i++)
    {
        cout<<new_vec[i]<<" ";
    }
    return new_vec;
    //set the value end of the list and begining of the list
    //while loop 
  */
 unordered_map<int,int> z;
 vector<int>ans(2);
 for(int i=0;i<nums.size();i++)
{
    int complement=goal-nums[i];
 
    if(z.find(complement)!=z.end())
    {
        ans[0]=i;
        ans[1]=z[complement];


    }
    else{
        z[nums[i]]=i;
    }
}
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
return ans;
}  
int main()
{

    vector<int> z={2,3,5,6,7};
    xd(z,11);
    
}
/*class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # x + y = target
        # nested for loops
        seen = {}
        # loop nums 
        for i in range(len(nums)):
            complement = target - nums[i]
            # check if nums[i] is in seen, use  y = target - x
            if complement in seen:
                return [seen[complement], i]
            # if not --> add it to seen
            else:
                seen[nums[i]] = i */