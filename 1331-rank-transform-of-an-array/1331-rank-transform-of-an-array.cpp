class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        map<int,int>mp;

        for(int x:arr)
        mp[x]++;

        int i=1;
        for(auto &it:mp)
        {
            it.second=i;
            i++;
        }

        for(int x:arr)
        {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};