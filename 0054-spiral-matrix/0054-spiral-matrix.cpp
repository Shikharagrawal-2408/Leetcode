class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int tr=0;
        int br=matrix.size()-1;
        int lc=0;
        int rc=matrix[0].size()-1;

        int total=(br+1)*(rc+1);
        int cnt=0;
        while(cnt<total){

            for(int i=lc;i<=rc && cnt<total;i++){
                ans.push_back(matrix[tr][i]);
                cnt++;
            }
            tr++;

            for(int i=tr;i<=br && cnt<total;i++){
                ans.push_back(matrix[i][rc]);
                cnt++;
            }
            rc--;

            for(int i=rc;i>=lc && cnt<total;i--){
                ans.push_back(matrix[br][i]);
                cnt++;
            }
            br--;
            
            for(int i=br;i>=tr && cnt<total;i--){
                ans.push_back(matrix[i][lc]);
                cnt++;
            }
            lc++;
        }
        return ans;
    }
};