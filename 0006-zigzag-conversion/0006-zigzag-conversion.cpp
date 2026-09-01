class Solution {
public:
    string convert(string s, int numRows) {
        string newstr="";
        if(s.size()<=2||numRows<2)
        {
            return s;
        }
        int k=numRows-2;
        int n = 2 * numRows - 2;
        for(int i=0;i<numRows;i++)
        {
            for(int j=i;j<s.size();j=j+n)
            {
                newstr=newstr+s[j];
                if (i != 0 && i != numRows - 1) {
                    int diagonal = j + n - 2 * i;

                    if (diagonal < s.size())
                        newstr += s[diagonal];
                }
            }
        }
        return newstr;
    }
};