class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int small=0;
        int cnt=0;

        for(int x:nums)
        {
            if(x==target)
            cnt++;

            if(x<target)
            small++;
        }

        vector<int> ans;

        for (int i = 0; i < cnt; i++) {
            ans.push_back(small + i);
        }

        return ans;
    }
};