class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s=0;
        for(int &i:nums)
        {
            s=s+i;
            i=s;
        }
        return nums;
    }
};