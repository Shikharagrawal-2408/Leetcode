class Solution {
public:
    int squ (int x)
    {
        return x*x;
    }
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            ans+=squ(nums[i-1]);
        }
        return ans;
    }
};
// 4+1+9