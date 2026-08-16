class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m=size(nums1);
    int n=size(nums2);
    vector<int>arr1(m+n);
    int tl=m+n;
    int i=0;
    while(i!=m)
    {
        arr1[i]=nums1[i];
        i++;
    }
    int k=0;
    while(k!=n)
    {
        arr1[i]=nums2[k];
        k++;
        i++;
    }
    sort(arr1.begin(), arr1.end());
      if (tl % 2 == 0) {
            return (arr1[tl / 2 - 1] + arr1[tl / 2]) / 2.0;
        }
        else {
            return arr1[tl / 2];
        }
    }
};