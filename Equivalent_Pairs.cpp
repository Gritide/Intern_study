/*#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>& nums) {
    int count =0 ;
    //itterate through the list 
        //if the i value equals to j value increment count
        //if the list 0 or 1 return 0
    if(nums.size()==0||nums.size()==1)
    {
        return 0;
    }
    vector  <int>z;  
   
    int n=nums.size();
    for (int i=0; i<nums.size()-1;i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {

            if(nums[i]==nums[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> nums={3,2,3,2,2};
    cout<<solve(nums);
}*/
#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int solve(vector<int>& nums) {
    //key and the value

    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        //nums[i] is the key increment if you have the key
        ans += m[nums[i]]++;
    }
    return ans;
}
int main() {
  vector<int>z={3, 2, 3, 2, 2};
  cout<<solve(z);
  return 0;
}
