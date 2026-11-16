class Solution {
public:
    string digitSum(string s, int k) {

        while(s.length()>k)
        {
            string temp="";
            int sum=0;
            for(int i=0;i<s.length();i++)
            {
                sum+=s[i]-'0';
                if((i + 1) % k == 0 || i == s.length() - 1)
                {
                    temp += to_string(sum);
                    sum = 0;
                }
            }
            s=temp;
        }

        return s;
    }
};