class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&res, vector<int>&candidates, int target,int index, int sum)
    {
        if(sum==target)
        {
            ans.push_back(res);
            return;
        }
        if(sum>target || index==candidates.size())
        return;

        //include
        res.push_back(candidates[index]);
        solve(ans,res,candidates,target, index,sum+candidates[index]);

        //exclude
        res.pop_back();
        solve(ans,res,candidates,target,index+1,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;

        solve(ans,res,candidates,target, 0,0);
        return ans;

    }
};