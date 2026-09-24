class Solution {
public:

int sum(int a)
{
    int s=0;
    while(a>0)
    {
        int d=a%10;
        s+=d;
        a/=10;
    }
    return s;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int a=sum(nums[i]);
            if(a==i)
            return a;
        }

        return -1;
    }
};