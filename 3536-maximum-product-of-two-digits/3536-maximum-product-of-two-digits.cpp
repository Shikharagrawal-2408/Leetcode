class Solution {
public:
    int maxProduct(int n) {

        int first=0;
        int second=0;

        while(n)
        {
            int d=n%10;
            if(d>=second)
            {
                if(second>first)
                first=second;
                second=d;
                d=0;
            }
            if(d>first)
            first=d;
            n/=10;
        }
        
        return first*second;        
    }
};