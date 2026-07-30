class Solution {
public:
    int minimumPushes(string word) {
        
        int n=word.length();
    
        if(n<=8)
        return n;
        
        vector<int> arr(26, 0);

        for(char c : word)
        arr[c - 'a']++;
        
        sort(arr.begin(),arr.end(),greater <int>());
        
        int cnt = 0;

        for(int i = 0; i < 26 && arr[i]>0; i++)
        cnt += arr[i] * (i / 8 + 1);
        
        return cnt;
            
    }
};