#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void solve(int nums[], int k,int n) {
    //check whether there is a input or not
    int new_vector[6];
    k=k*2;
    for(int i=0;i<n;i++)
    {
        new_vector[i]=nums[i];
    }
    for(int j=0;j<n;j++)
    {
        nums[j+k%n]=new_vector[j];
    }


    //copy the array


    //loop through the array find the psition and set equal
}
int main()
{
    int abc[]={1,2,3,4,5,6};
    solve(abc,2,6);
    cout<<abc<<endl;
}
/*#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<int> solve(vector<int>& nums, int k) {
    //check whether there is a input or not
    vector<int> new_vector;
    k=k*2;
    for(int i=0;i<nums.size();i++)
    {
        new_vector.push_back(nums[i]);
    }
    for(int j=0;j<nums.size();j++)
    {
        nums[j+k%nums.size()]=new_vector[j];
    }
    return nums;

    //copy the array


    //loop through the array find the psition and set equal
}
int main()
{
    vector<int>abc={1,2,3,4,5,6};
    solve(abc,2);
}*/