class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1,arr2;
        int n=nums.size();

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int i=2;
        while(i<n)
        {
            int a=arr1.back();
            int b=arr2.back();
            if(a>b)
            arr1.push_back(nums[i]);

            else
            arr2.push_back(nums[i]);

            i++;
        }

        vector<int>res;
        for(int x:arr1)
        res.push_back(x);

        for(int x:arr2)
        res.push_back(x);

        return res;
        
    }
};