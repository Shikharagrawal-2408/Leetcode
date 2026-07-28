class Solution {
public:
    string smallestPalindrome(string s) {
        // if(s.length()<2)
        // return s;

        int n= s.length();
        int part=n/2;

        sort(s.begin(),s.begin()+part);
        for(int i=0;i<part;i++)
        s[n-i-1]=s[i];

        return s;
    }
};