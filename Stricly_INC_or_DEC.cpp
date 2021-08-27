bool solve(vector<int>& nums) {
    //boolean = false
    bool temp=true;
    //if it is incrasing
    if(nums[0]==nums[1])
    {
        temp=false;
    }
    if(nums.size()==1)
    {
        temp=true;
    }
    
    if(nums[0]<nums[1])
      { 
          //loop
        for(int i=0; i<nums.size()-1;i++)
        {
            //if nums[i+1]-nums[i]==1
            if(nums[i]<nums[i+1])
            {
                temp=true;
            }
            else
            {
                temp=false;
                break;
            }
        }
      }
         //if it is decreasing
    if(nums[0]>nums[1])
    {
        //loop
        for(int i=0;i<nums.size()-1;i++)
        {
            //if nums[i]-nums[i+1]==1
            if(nums[i]>nums[i+1])
            {
                temp= true;
            }
            else{
                temp=false;
                break;
            }
        }
            
    }
    return temp;
        
}
/*bool solve(vector<int>& nums) {
    int N = nums.size();
    if (N < 1) return false;
    if (N == 1) return true;

    int decr = 0, incr = 0;

    for (int i = 0; i < N - 1; i++) {
        if (nums[i] > nums[i + 1])
            incr = 1;
        else {
            incr = 0;
            break;
        }
    }

    for (int i = 0; i < N - 1; i++) {
        if (nums[i] < nums[i + 1])
            decr = 1;
        else {
            decr = 0;
            break;
        }
    }

    return decr || incr;
}*/