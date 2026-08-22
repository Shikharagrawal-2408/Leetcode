class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int p=1;
        int temp=n;

        while(n)
        {
            int d=n%10;
            sum+=d;
            p*=d;
            n/=10;
        }
        sum+=p;

        return !(temp%sum);
    }
};