class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int i=1;
        for(char c:s)
        {
            int a= 26-(c-'a');
            ans=ans+(a*i);
            i++;
        }
        return ans;
    }
};