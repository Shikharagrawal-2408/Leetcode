class Solution {
public:
    int numberOfSpecialChars(string word) {
       vector<int>arr(26,-1);
       
       int cnt=0;
       for (int i = 0; i < word.length(); i++) {
            char c = word[i];

            if (isupper(c) && arr[c - 'A'] == -1) {
                arr[c - 'A'] = i;
            }
        }

       for(int i=word.length()-1;i>=0;i--)
       {
        char c=word[i];
        if(islower(c))
        {
            int idx = c - 'a';

            if (arr[idx] == -1)
            continue;

            if (i < arr[idx])
            cnt++;

            arr[idx] = -1;
        }
       }

        return cnt;
    }
};