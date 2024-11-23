#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    int c = 1;
    int mn = INT_MAX;
    if (s[0] == s[n - 1])
    {
        cout << n << endl;
        return;
    }
    int i = 0;
    while (i < n && s[i] == s[0])
        i++;
    int j = n - 1;
    while (j >= 0 && s[j] == s[n - 1])
        j--;
    j = n - 1 - j;
    cout << n - min(i, j) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(n, s);
    }
    return 0;
}