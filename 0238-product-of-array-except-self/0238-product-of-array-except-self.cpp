class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>mp(nums.size());
        vector<int>m(nums.size());
        vector<int>a(nums.size());
        mp[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            mp[i]=mp[i-1]*nums[i-1];
        }
        m[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            m[i]=m[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            a[i]=mp[i]*m[i];
        }
        return a;
    }
};