class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high =nums.size()-1;
        int low =0;
        int mid =(low + high)/2;
        while(low<=high)
        {
            mid=(low + high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return low;
    }
};