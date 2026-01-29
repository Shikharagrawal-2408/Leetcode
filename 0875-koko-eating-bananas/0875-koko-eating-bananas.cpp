class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxa=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        maxa=max(maxa,piles[i]);

        int left=1,right=maxa;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            long long cnt=0;
            for(int i=0;i<n;i++)
            cnt+=(piles[i]+mid-1)/mid;

            if(cnt<=h)
            right=mid-1;
            
            else
            left=mid+1;
        }
        return left;
    }
};