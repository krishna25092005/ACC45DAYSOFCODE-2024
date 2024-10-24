#include <bits/stdc++.h>
using namespace std;
void maxDelete(int &n, string &s)
{
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] >= 2)
        {
            cout << n - 2 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        maxDelete(n, s);
    }

    return 0;
}
