class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt=0;
        for(string a :patterns)
        {
            if(word.find(a)!=string::npos)
            cnt++;
        }
        return cnt;
    }
};