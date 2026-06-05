class Solution {
public:
int iswavy(int n)
{
    if(n<100)
    return 0;

    vector<int>d;

    while(n)
    {
        d.push_back(n%10);
        n/=10;
    }

    reverse(d.begin(),d.end());
    int cnt=0;
    for(int i=1;i<d.size()-1;i++)
    {
        if ((d[i] > d[i - 1] && d[i] > d[i + 1]) || (d[i] < d[i - 1] && d[i] < d[i + 1]))
        cnt++;
    }
    return cnt;

}
    int totalWaviness(int num1, int num2) {
        int cnt=0;

        for(int i=num1;i<=num2;i++)
        cnt+=iswavy(i);
            
        return cnt;
    }
};
            