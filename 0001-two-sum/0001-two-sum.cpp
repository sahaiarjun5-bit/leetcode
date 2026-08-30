#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int>mp;
        int n = size(nums);
        for (int i = 0; i < n; i++)
        {
            if (mp.find(target - nums[i])!= mp.end())
            {
                return {mp[target - nums[i]],i};
            }
            else
            {
                mp[nums[i]] = i;
            }

        }
        return {}; 
    }
};