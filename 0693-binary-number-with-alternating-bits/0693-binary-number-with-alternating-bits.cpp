class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>arr;
        int a=n&1;
        n=n>>1;
        
        while(n>0)
        {
            if(a==(n&1))
            return false;

            else
            a=n&1;
            n=n>>1;
        }
        return true;
    }
};