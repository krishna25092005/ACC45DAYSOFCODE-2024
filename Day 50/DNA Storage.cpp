#include <bits/stdc++.h>
using namespace std;

string solve(string &s)
{
    string ans;
    for (size_t i = 0; i < s.length(); i += 2)
    {
        string pair = s.substr(i, 2);
        if (pair == "00")
        {
            ans += 'A';
        }
        else if (pair == "01")
        {
            ans += 'T';
        }
        else if (pair == "10")
        {
            ans += 'C';
        }
        else if (pair == "11")
        {
            ans += 'G';
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << endl;
    }
    return 0;
}