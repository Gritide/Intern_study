#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>& nums) {
    //copy the vector
    
    vector<int> newvec;
    for (int i =0;i<nums.size();i++)
    {
        newvec[i]=nums[i];
    }
    if(nums.size()==0 || nums.size()==1)
    {
        return nums[0];
    }
    else{
         for (int i =0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(newvec[i]==newvec[j])
                {
                    return newvec[i];
                }
            }
        }
        return 1;
    }
    //check whether our list is zero or one

    //do for loop 
    //check each element in the list
    
}
int main()
{
    vector<int> nums = {1,2,3,1};
    cout<<solve(nums);
}