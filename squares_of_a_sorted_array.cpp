#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
        //copy vector
        vector<int>copy;
        int temp;
        //check each value in vector
        for(int i=0;i<nums.size();i++)
        {
            
            //then i can get the square of each element
            //i will copy the each squared element
            copy[i]=nums[i]*nums[i];
            
             
        }
        
        //loop
        for(int i=0;i<copy.size();i++)
        {
            //i will do a sort
            for(int j=i+1;j<copy.size();j++)
            {
                if(copy[i]>copy[j])
                {
                    temp=copy[j];
                    copy[j]=copy[i];
                    copy[i]=temp;
                }
            }
        }
        return copy;
        //return a vector
        
    }
    int main()
    {
        vector<int>copy={-4,-1,0,3,10};
        cout<< sortedSquares(copy)
    }




    /*vector<int> sortedSquares(vector<int>& nums) {
						vector<int>ans(nums.size());
						int i=0;
						int j=nums.size()-1;
						for(int k=nums.size()-1;k>=0;k--)
						{
							if(abs(nums[i]) < abs(nums[j]))
							   {
								   ans[k] = nums[j]*nums[j];
								   j--;
							   }
							   else
							   {
								   ans[k] = nums[i]*nums[i];
								   i++;
							   }
						}
							   return ans;
					} O(N)*/