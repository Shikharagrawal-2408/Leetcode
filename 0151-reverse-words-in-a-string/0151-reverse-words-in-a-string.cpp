class Solution {
public:
    string reverseWords(string s) {
        string res="",a="";
        int right=s.length()-1;

        while(right>=0)
        {
            while(right>=0 && s[right] ==' ')
            right--;

            if(right<0)
            break;

            a="";
            while(right>=0 && s[right]!=' ')
             a+=s[right--];
             reverse(a.begin(),a.end());

             if(!res.empty())
             res+=" ";
             res+=a;
        }
        
        return res;
        
    }
};