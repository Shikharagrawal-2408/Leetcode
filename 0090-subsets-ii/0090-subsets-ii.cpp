class Solution {
public:
    void solve(vector<vector<int>>&ans, vector<int>&res, vector<int>&nums, int index)
    {
        ans.push_back(res);

        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1])
            continue;

            res.push_back(nums[i]);
            solve(ans,res,nums,i+1);
            res.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        sort(nums.begin(),nums.end());
        solve(ans,res,nums,0);
        return ans;
    }
};