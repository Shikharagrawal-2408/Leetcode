class Solution {
public:

    void dfs(int city, vector<vector<int>>&isConnected, vector<bool>&isvisited)
    {
        isvisited[city]=true;
        for(int neighbour=0; neighbour<isConnected.size();neighbour++)
        {
            if(isConnected[city][neighbour]==1 && !isvisited[neighbour])
            dfs(neighbour, isConnected, isvisited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();

        vector<bool>isvisited(n,false);

        int cnt=0;

        //loop over all the cities
        for(int i=0;i<n;i++){
            if(!isvisited[i])
            {
                dfs(i,isConnected, isvisited);
                cnt++;
            }
        }
        return cnt;
    }
};