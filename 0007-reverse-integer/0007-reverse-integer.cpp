class Solution {
public:
    int reverse(int x) {
        int rev=0;
        // int temp=x;

        while(x!=0)
        {
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
            return 0;

            rev=(rev*10)+(x%10);
            x/=10;
        }
        return rev;
    }
};