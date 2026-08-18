class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxw=0;
        int len=height.size();
        int minh;
        int j=0;
        int i=len-1;
        while(j<i)
        {
            minh=min(height[i],height[j]);
            if(maxw<(minh*(i-j)))
            {
                maxw=minh*(i-j);
            }
            if(height[i]>height[j])
            {
                j++;
            }
            else
            {
                i--;
            }
            
        }
        return maxw;
    }
};