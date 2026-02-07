class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int mask=0;
        for(int x:nums)
        mask^=x;

        return mask;
    }
};