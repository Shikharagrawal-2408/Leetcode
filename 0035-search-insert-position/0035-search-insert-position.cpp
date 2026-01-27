class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int left=0,right=nums.size()-1;
     int a;
     while(left<=right)
     {
        int mid=left+(right-left)/2;
        //a=left;

        if(nums[mid]==target)
        return mid;

        else if(nums[mid]>target)
        right=mid-1;

        else
        left=mid+1;
     }   
     return left;
    }
};