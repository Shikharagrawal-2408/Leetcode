class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0,maxa=0;

        for(int right=0;right<s.length();right++)
        {
            char c=s[right];
            if(mp[c]>0)
            {
                while(s[left]!=c)
                {
                    mp[s[left]]--;
                    left++;
                }
                mp[c]--;
                left++;
            }

            mp[c]++;
            maxa=max((right-left+1),maxa);
        }
        return maxa;
    }
};