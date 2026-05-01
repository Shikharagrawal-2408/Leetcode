class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
    
    int n=nums.size();
    long long sum=0;
    long long f0=0;
     
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        f0+=1LL*(i*nums[i]);
    }
    long long ans=f0;
    for(int i=n-1;i>=0;i--)
    {
        long long f1=f0+sum-1LL*(n*nums[i]);
        ans=max(ans,f1);
        f0=f1;
     }

     return ans;
    }
};