class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int a=nums.size();
        vector<int>arr;
        for(int i=0;i<a;i++)
        {
            if(nums[i]>0)
            {
                int j=(i+nums[i])%a;
                arr.push_back(nums[j]);
            }
            else if(nums[i]<0)
            {
                int j=((i+nums[i])%a+a)%a;
                arr.push_back(nums[j]);
            }
            else
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};