#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>& prices) {
    //have loop
    int profit=0;
   int sell=0;
        int buy=0;
    for(int  i=0;i<prices.size(); i++)
    {
        
        if(i%2==0)
        {
            buy=buy+prices[i];
 
        }
        else if(i%2!=0)
       {
           sell=sell+prices[i];
        
       }
       
       profit=profit+(sell-buy);
    }
    
    return profit;
    
    //prices[i+1]- prices[i]
}
//4
int main()
{
    vector<int> nums={1,5,3,4,6};
    cout<<solve(nums);
}

