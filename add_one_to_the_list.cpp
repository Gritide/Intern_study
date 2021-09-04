#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*vector<int> solve(vector<int>& nums) {
    int n=nums.size();
    int kat =1;
    int number=0;
    int digit=0;
    vector<int>neww;
    if(nums.size()==1)
    {
        int z=nums[0];
        z=z+1;
        while(z!=0)
        {
            digit=z%10;
            neww.push_back(digit);
            z=z/10;
        }
    }
    else{
    for(int i=1;i<nums.size();i++)
    {

        kat=kat*10;

    }
    for(int i=0;i<nums.size();i++)
    {
        number=number+(nums[i]*kat);
        kat=kat/10;
    }
    number=number+1;
    while(number!=0)
    {
        digit=number%10;
        neww.push_back(digit);
        number=number/10;
    }
    }
    reverse(neww.begin(),neww.end());
    return neww;
}*/
//O(n)
vector<int> solve(vector<int>& nums) {
    // Trasverse the vector in reverse
    for (int i = nums.size() - 1; i >= 0; --i) {
        // We have 2 options:
        // 1. If the number is 9 it will become 0 and we need to continue
        // 2. The number is not 9 so we increase it by 1 and return the updated vector
        if (nums[i] == 9) {
            nums[i] = 0;
        } else {
            nums[i] += 1;
            return nums;
        }
    }
    // In case all the numbers in the vector were 9s we need to insert 1 in the front.
    nums.insert(nums.begin(), 1);
    return nums;
}
int main() {
  vector<int> la={9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
  solve(la);
  return 0;
}

