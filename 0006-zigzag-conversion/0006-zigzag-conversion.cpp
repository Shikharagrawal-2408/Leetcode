class Solution {
public:
    string convert(string s, int numrows) {

        if(numrows==1)
        return s;
    
        vector<string>ans(numrows);

        int curr=0;
        int toggle=1;
        for( char c:s)
        {
            ans[curr].push_back(c);
            curr+=toggle;

            if(curr==(numrows-1) || curr==0)
            toggle*=-1;
        }

        string res="";
        for (string a:ans)
        {
            res+=a;
        }
        return res;
    }
};