#include <bits/stdc++.h>
using namespace std;

void encodeMessage(int n, string &s)
{

    for (int i = 0; i + 1 < n; i += 2)
    {
        swap(s[i], s[i + 1]);
    }

    for (int i = 0; i < n; ++i)
    {
        s[i] = 'a' + ('z' - s[i]);
    }

    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;

        cin >> n;
        cin >> s;

        encodeMessage(n, s);
    }

    return 0;
}