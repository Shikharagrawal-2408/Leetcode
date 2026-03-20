class Solution {
public:

    void solve(vector<vector<int>>&ans, vector<int>&res, vector<int>freq,vector<int>&nums)
    {
        if(res.size()==nums.size())
        {
            ans.push_back(res);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                res.push_back(nums[i]);
                freq[i]=1;
                solve(ans,res,freq,nums);
                freq[i]=0;
                res.pop_back();
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;

        vector<int>freq(nums.size(),0);

        // for(int i=0;i<nums.size();i++)
        // freq[i]=0;
        solve(ans,res,freq,nums);

        return ans;
    }
};