class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<nums[a])
            a=i;
            
            if(nums[i]>nums[b])
            b=i;
        }

        int left = min(a, b);
        int right = max(a, b);

        int option1 = right + 1;                 // remove both from front
        int option2 = n - left;                  // remove both from back
        int option3 = (left + 1) + (n - right); // one from each side

        return min(option1, min(option2, option3));

    }
};