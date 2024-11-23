#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> S(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> S[i];
        }
        string v;
        cin >> v;

        int minSize = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == '0')
            {
                minSize = min(minSize, S[i]);
            }
        }

        cout << minSize << endl;
    }
    return 0;
}