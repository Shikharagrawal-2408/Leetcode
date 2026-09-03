class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int mina=INT_MAX;

        for(int x:nums)
        {
            if(x&1)
            mina=min(mina,x);
        }

        if(mina==INT_MAX)
        return true;

        for(int x:nums)
        {
            if(x%2==0 && x<mina)
            return false;
        }
        return true;
    }
};