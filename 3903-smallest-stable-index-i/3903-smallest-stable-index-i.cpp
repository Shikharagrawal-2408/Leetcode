class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int> suffixMin(n);

        suffixMin[n-1] = nums[n-1];
        //calculating the minimum
        for(int i = n-2; i >= 0; i--)
        {
            suffixMin[i] = min(nums[i], suffixMin[i+1]);
        }

        int maxa = INT_MIN;

        for(int j = 0; j < n; j++)
        {
            maxa = max(maxa, nums[j]);

            if(maxa - suffixMin[j] <= k)
                return j;
        }

        return -1;
    }
};