//linear solution o(n)
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int maxSubArray(vector<int>& nums) {
      int maxSub=nums[0];
      int curSum=0;
      for(int i=0;i<nums.size();i++)
      {
        if(curSum <0)
        {
          curSum=0;
        }
        curSum=curSum+nums[i];
        maxSub=max(maxSub,curSum);
      }
      return  maxSub;
    }
int main() {
  vector<int> la={-2,1,-3,4,-1,2,1,-5,4};
  cout<<maxSubArray(la);
  return 0;
}