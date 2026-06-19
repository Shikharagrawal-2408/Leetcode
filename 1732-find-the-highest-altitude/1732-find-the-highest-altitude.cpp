class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>arr(n+1);
        arr.push_back(0);
        int sum=0;
        for(int x:gain)
        {
            sum+=x;
            arr.push_back(sum);
        }
        int a=*max_element(arr.begin(),arr.end());
        return a;
    }
};