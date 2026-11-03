class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxa=0;
        int sum=0;
        int cnt=0;

        for(int x:nums)
        {
            if(x>maxa)
            maxa=x;

            cnt++;
            sum+=x;
        }
        return (maxa*cnt)-sum;
    }
};