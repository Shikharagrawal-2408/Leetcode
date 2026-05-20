class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n= A.size();
        vector<bool>seena(n+1,false),seenb(n+1,false);
        int cnt=0;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int a=A[i];
            int b=B[i];

            if(a==b)
            cnt++;

            if(seenb[a]==true)
            cnt+=1;

            if(seena[b]==true && a!=b)
            cnt+=1;

            seena[a]=true;
            seenb[b]=true;
            
            res.push_back(cnt);
        }
        return res;
    }
};