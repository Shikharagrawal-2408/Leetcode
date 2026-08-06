class Solution {
public:
    int smallestNumber(int n, int t) {

        for(int i=n;i<=n+10;i++)
        {
            int d=1;
            int temp=i;
            while(temp)
            {
                d=d*(temp%10);
                temp/=10;
            }

            if(d%t==0){
                return i;
            }
        }
        return 1;
    }
};