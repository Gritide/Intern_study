//https://binarysearch.com/problems/Largest-Number-By-Two-Times
//O(n)
bool solve(vector<int>& nums) {


    //first i will find the second largest
    //how should i handle 1 and 0 input array possible false
    //how shoyuld i handle if they are equal
    int largest=0;
    int second_largest=0;
    if(nums.size()==0||nums.size()==1)
    {
        return false;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>largest){
            second_largest=largest;
            largest=nums[i];
        }
        else if(nums[i]<largest && nums[i]>second_largest)
        {
            second_largest=nums[i];
        }
        else if(nums[i]==largest)
        {
            second_largest=largest;
        }
    }
    if(second_largest*2>=largest)
    {
        return false;
    }
    else
    {
        return true;
    }
}