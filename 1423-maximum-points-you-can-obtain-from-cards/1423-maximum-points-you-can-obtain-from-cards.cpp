class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0,ans=0;

        for(int i=n-k;i<n;i++)
        {
            sum+=cardPoints[i];
        }
        ans=sum;

        int left=0;
        int right=n-k;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[left++];
            sum-=cardPoints[right++];
            ans=max(ans,sum);
        }
    return ans;
    }
};

