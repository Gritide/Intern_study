//sliding window
// https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
//O(n) time O(1)
    int maxArea(vector<int>& height) {
        int area=0;
        int j=height.size()-1;
        int i=0;
        int max_area=0;
        while(i<j)
        {
            int width=j-i;
            area=min(height[i],height[j])*width;
            max_area=max(max_area,area);
            if(height[i]<=height[j])
            {
                i++;
            }
            else{
                j--;
            }
            
            
        }
        return max_area;

        //O(n^2) / O(1)
        /*t max_area=0;
       
        for(int i=0;i<height.size()-1;i++)
        {
            
            for(int j=i+1;j<height.size();j++)
            {
                int min_height=0;
                int width=j-i;
                if(height[i]>height[j])
                {
                    min_height=height[j];
                }
                else if(height[i]<height[j])
                {
                    min_height=height[i];
                }
                else if(height[i]==height[j])
                {
                    min_height=height[i];
                }
                int area=min_height*width;
                if(max_area<area)
                {
                    max_area=area;
                }
                
            }
        }
        return max_area;*/
        
    }
};