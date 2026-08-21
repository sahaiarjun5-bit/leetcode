class Solution {
public:
    int strStr(string haystack, string needle) {
       int len=haystack.size();
       int len1=needle.size();
       int j=0;
       int l;
       while(j<len)
       {
            if(haystack[j]==needle[0])
            {
                int i=0;
                int k=j;
                while(haystack[k]==needle[i]&&i<len1)
                {
                    i++;
                    k++;
                }
                if(i==len1)
                {
                    return j;
                }
            
            }
            j++;
       }
       return -1;
    }
};