class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<bool>ans;
        int maxa=0;

        for(int x:candies)
        maxa=max(x,maxa);

        for(int x:candies)
        {
            if(x+e>=maxa)
            ans.push_back(true);

            else
            ans.push_back(false);
        }
        return ans;
    }
};