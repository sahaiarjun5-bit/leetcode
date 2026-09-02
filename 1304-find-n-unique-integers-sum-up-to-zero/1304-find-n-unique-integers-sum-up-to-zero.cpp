class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ar;
        for(int i=0;i<n;i++)
        {
           ar.push_back(i * 2 - n + 1); 
        }
        return ar;
    }
};