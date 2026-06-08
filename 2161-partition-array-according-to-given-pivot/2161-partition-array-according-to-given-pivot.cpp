class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less,equal,great;
        for(int x:nums)
        {
            if(x<pivot)
            less.push_back(x);

            else if(x==pivot)
            equal.push_back(x);

            else
            great.push_back(x);
        }

        for(int x:equal)
        less.push_back(x);

        for(int x:great)
        less.push_back(x);

        return less;
    }
};