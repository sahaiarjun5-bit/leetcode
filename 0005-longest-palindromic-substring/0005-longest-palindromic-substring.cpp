class Solution {
public:
    string longestPalindrome(string s) {
    int l=0;
    int m=0;
    int r=0;
    string str="";
    string maxstr="";
    for(int i=0;i<s.size();i++)
        {
            l=i;
            r=i;
            while(l>-1&&r<s.size()&&s[l]==s[r])
            {  
                l--;
                r++;
            }
            str=s.substr(l+1,r-l-1);
            if(maxstr.size()<str.size())
                {
                    maxstr=str;
                        
                }
            l=i;
            r=i+1;
            while(l>-1&&r<s.size()&&s[l]==s[r])
            {  
                l--;
                r++;
            }
            str=s.substr(l+1,r-l-1);
            if(maxstr.size()<str.size())
                {
                    maxstr=str;
                        
                }
        }
    return maxstr;
    }
};