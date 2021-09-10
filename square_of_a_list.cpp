#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    
    int n=nums.size();
    vector<int>ans;
     vector<int>ans;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
       if((nums[i]*nums[i])>(nums[j]*nums[j]))
       {
           ans.push_back(nums[i]*nums[i]);
           i++;
       }
       if((nums[i]*nums[i])<(nums[j]*nums[j]))
       {
           ans.push_back(nums[j]*nums[j]);
           j--;
       }
       else{
           ans.push_back(nums[i]*nums[i]);
           ans.push_back(nums[j]*nums[j]);
           i++;
           j--;
       }
    }

    for(int m=0;m<ans.size();m++)
    {
        ans.pop_back();
    }
        return ans;
    }
    int main()
    {
        //   i
        //81 4 0 4 9
        //       j
        //81 9

        vector<int>copy={-9, -2, 0, 2, 3};
        sortedSquares(copy);
    }

