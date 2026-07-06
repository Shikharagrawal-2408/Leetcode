class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>arr(right+1,true);
        arr[0]=arr[1]=false;

        for(int i=2;i*i<=right;i++)
        {
            if(arr[i]==true)
            {
                for(int j=i*i;j<=right;j+=i)
                arr[j]=false;
            }
        }
        int prev=-1;
        int diff=INT_MAX;
        vector<int> ans={-1,-1};
        
        for(int i=left;i<=right;i++)
        {
            if(arr[i])
            {
                if(prev!=-1 && i-prev<diff)
                {
                    diff=i-prev;
                    ans={prev,i};
                }
            prev=i;
            }
        }

        return ans;
    }
};