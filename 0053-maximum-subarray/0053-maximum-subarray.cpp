class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0];
        int maxa =nums[0];

        for (int i=1;i<nums.size();i++)
        {
            if(curr<0)
            curr=0;

            curr+=nums[i];
            
            maxa=max(maxa,curr);
        }
        return maxa;
    }
};