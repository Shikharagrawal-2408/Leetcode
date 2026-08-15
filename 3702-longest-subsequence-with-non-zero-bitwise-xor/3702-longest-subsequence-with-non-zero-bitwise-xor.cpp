class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();

        int mask = 0;
        int countZ = 0;

        for (int x : nums) {
            mask ^= x;

            if (x == 0)
                countZ++;
        }

        if (countZ == n)
            return 0;

        if (mask != 0)
            return n;

        return n - 1;
    }
};
