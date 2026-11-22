class Solution {
public:
    bool checkString(string s) {
        int b=INT_MAX;
        int a=INT_MAX;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
                b=i;
                break;
            }
        }

        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='a')
            {
                a=i;
                break;
            }
        }

        if(a==INT_MAX || b==INT_MAX)
        return true;
        
        if(a>b)
        return false;

        return true;


        
    }
};