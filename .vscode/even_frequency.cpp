#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool solve(vector<int>& nums) {
    //empty input and single input handler
    int counter=1;
    bool temp=true;
    if(nums.size()==0 || nums.size()%2!=0)
    {
        temp=false;
    }

    else{
       sort(nums.begin(),nums.end());
       for (int i=0;i<nums.size()-1;i++)
       {
           if(nums[i]==nums[i+1])
           {
               counter++;
           }
           else if(nums[i]!=nums[i+1]&& counter %2!=0)
           {
               temp=false;
               break;
 
           }
           else{
               counter=1;
           }
       }
    }
    return temp;
    //itterate through array
        //itterage through array

}
int main() {
  vector<int> nums={1,3,1};
  cout<<solve(nums);
  return 0;
}