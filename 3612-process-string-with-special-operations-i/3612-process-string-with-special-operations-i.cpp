class Solution {
public:
    string processStr(string s) {
        string res="";

        for(char c:s)
        {
            if(c=='*' && res.length()>0)
            res.pop_back();

            else if(c=='#')
            res=res+res;

            else if(c=='%')
            reverse(res.begin(),res.end());

            if(c!='*' && c!='#' && c!='%')
            res+=c;
        }
        return res;
    }
};