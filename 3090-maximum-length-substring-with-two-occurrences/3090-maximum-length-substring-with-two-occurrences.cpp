class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0;
        int left=0;
        unordered_map<char,int>mp;
        int i=0;
        for( i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            while(mp[s[i]]>2)
            {
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};