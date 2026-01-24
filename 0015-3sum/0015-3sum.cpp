class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>>res;

        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;

            int left=i+1, right=nums.size()-1;

            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];

                if(sum<0)
                left++;

                else if(sum>0)
                right--;

                else
                {
                    res.push_back({nums[i],nums[left],nums[right]});

                    int leftvalue=nums[left],rightvalue=nums[right];
                    while(left<right && nums[left]==leftvalue) left++;
                    while(left<right && nums[right]==rightvalue) right--;
                }
            }
        }
        return res;
    }
};