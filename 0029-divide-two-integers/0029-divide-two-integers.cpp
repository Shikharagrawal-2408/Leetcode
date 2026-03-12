class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)
        return 1;

        bool sign=true;
        if((dividend<=0 && divisor>0) ||(dividend>=0 && divisor<0))
        sign=false;

        long long n = llabs((long long)dividend);
        long long m = llabs((long long)divisor);
        long ans=0;
        while(n>=m)
        {
            int cnt=0;
            while(n>=(m<<(cnt+1)))
            cnt++;

            ans+=(1<<cnt);
            n-=(m<<cnt);
        }
        if(ans==(1<<31) && sign)
        return INT_MAX;

        if(ans==(1<<31) && !sign)
        return INT_MIN;

        return sign?ans:-ans;
    }
};