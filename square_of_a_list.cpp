vector<int> solve(vector<int>& nums) {
   
    //for loop
        // get i value for nums and multiple itself
        //set that value equal to nums i value
        //sort the vector
        //return thevector
        int temp2;
        int temp;
    for (int i=0;i<nums.size();i++)
    {
       
        nums[i]=nums[i]*nums[i];

    }

       for(int j=0;j<nums.size();j++)
    {
        for(int z=0;z<nums.size();z++)
        {
            if(nums[z]<nums[j])
            {
               
            }
        }
  
    }
   
    return nums;
}