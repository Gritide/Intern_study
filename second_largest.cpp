#include<iostream>
#include<vector>
using namespace std;
int second_large(vector<int>nums)
{
    int largest=0;
    int secondlargest=0;
    for(int i=0;i<nums.size();i++)
    {
        if(largest<nums[i])
        {
            secondlargest=largest;
            largest=nums[i];
        }
        else if(largest>nums[i] && secondlargest < nums[i])
        {
            secondlargest=nums[i];
        }
    }
    return secondlargest;
}
int main()
{
    vector<int> abc={5,2,3,4,6};
    cout<<second_large(abc)<<endl;
}