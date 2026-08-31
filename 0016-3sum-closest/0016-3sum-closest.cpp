class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> arr1;
        int min=INT_MAX;
        int c;
        for (int i = 0; i < nums.size() - 1; i++) {
        int k=nums.size()-1;
        int j=i+1;
        while(j<k)
        {
            if(nums[i]+nums[j]+nums[k]>=target)
            {
                if(min>abs(target-(nums[i]+nums[j]+nums[k])))
                {
                    c=nums[i]+nums[j]+nums[k];
                    min=abs(target-(nums[i]+nums[j]+nums[k]));
                }
                k--;
            }
            else
            {
                if(min>target-(nums[i]+nums[j]+nums[k]))
                {
                    c=nums[i]+nums[j]+nums[k];
                    min=target-(nums[i]+nums[j]+nums[k]);
                }
                j++;
            }
        }
    }
        return c;
    }
};

        