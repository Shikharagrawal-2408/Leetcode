class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=0;
        int j=colors.size();

        for(int i=0;i<j;i++)
        {
            if(colors[i]!=colors[0])
            ans=max(ans,i);

            if(colors[i]!=colors[j-1])
            ans=max(ans,j-1-i);
        }
        return ans;
    }
};