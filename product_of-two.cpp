#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//O(n)
/*int solve(vector<int>& nums) {
    int minval = nums[0], maxval = nums[0], ans = 0;
    for (int i = 1; i < nums.size(); i++) {
        ans = max(ans, max(minval * nums[i], maxval * nums[i]));
        minval = min(minval, nums[i]);
        maxval = max(maxval, nums[i]);
    }
    return ans;
}*/
//O(n^2)
int solve(vector<int>& nums)
{
    int product=0;
    int max_product=0;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++)
        {
            product=nums[i]*nums[j];
            max_product=max(product,max_product);
        }
    }
    return max_product;
}
int main() {
  vector<int>z={-2,-3,1,2,-8};
  cout<<solve(z);
  return 0;
}
/*int solve(vector<int>& nums) {
    //O(nlogn) We need to sort the array.
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int max1 = nums[0] * nums[1];
    int max2 = nums[n - 1] * nums[n - 2];

    return max(max1, max2);
}*/
