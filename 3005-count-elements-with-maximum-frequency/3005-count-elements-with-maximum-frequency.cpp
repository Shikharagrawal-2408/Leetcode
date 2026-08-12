class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums)
        mp[x]++;

        int mx=0;
        for(auto it:mp)
        {
            if(it.second>mx)
            mx=it.second;
        }

        int sum=0;
        for(auto it:mp)
        {
            if(it.second==mx)
            sum+=mx;
        }
        return sum;
    }
};