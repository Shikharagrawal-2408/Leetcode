class Solution {
public:
    int minSwaps(vector<int>& nums) {
     int n=nums.size();
     int k=0;

     for(int x:nums)
     k+=x;
     
     int maxa=0;
     int a=0;

     for(int i=0;i<k;i++)
     a+=nums[i];
     
     maxa=a;

     for(int i=k;i<n+k;i++)
     {
        a=a-nums[i-k]+nums[i%n];
        maxa=max(a,maxa);
     }
     return k-maxa;
    }
};