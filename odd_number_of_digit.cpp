int solve(vector<int>& nums) {
    int digit;
    
    int total=0;
    for(int i=0; i<nums.size();i++)
    {
        int count=0;
        //get the digit;
        while(nums[i]!=0)
        {
        digit=nums[i]%10;
        count++;
        nums[i]=nums[i]/10;
        }
        if(count%2 !=0)
        {
            total++;
        }
    }
    return total;
}