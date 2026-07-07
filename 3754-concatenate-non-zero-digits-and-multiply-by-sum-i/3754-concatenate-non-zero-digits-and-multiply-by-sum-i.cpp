class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        long long num=0;
        while(n)
        {
            int d=n%10;
            sum+=d;
            if(d!=0)
            num=num*10+d;
            n/=10;
        }

        while(num)
        {
            int d=num%10;
            n=n*10+d;
            num/=10;
        }
        return n*1LL*sum;
    }
};