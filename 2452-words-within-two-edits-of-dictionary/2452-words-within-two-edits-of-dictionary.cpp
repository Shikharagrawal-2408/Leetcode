class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>res;

        for (string s:queries)
        {
            for(string a:dictionary)
            {
                int cnt=0;
                int i=0;
                while(i<a.length())
                {
                    if(s[i]!=a[i])
                    cnt++;
                    if(cnt>2)
                    break;
                    i++;
                }

                if(cnt<=2)
                {
                    res.push_back(s);
                    break;
                }
            }
        }
        return res;
    }
};