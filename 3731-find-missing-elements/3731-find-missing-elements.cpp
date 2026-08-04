class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];

        int j=0;
        vector<int>ans;
        for(int i=a;i<=b;i++)
        {
            if(nums[j]==i)
            j++;

            else
            ans.push_back(i);
        }
        return ans;
    }
};