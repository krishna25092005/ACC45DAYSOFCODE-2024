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

        vector<int> strings(n);
        for (int i = 0; i < n; i++)
        {
            cin >> strings[i];
        }

        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            ans += abs(strings[i] - strings[i - 1]) - 1;
        }

        cout << ans << endl;
    }

    return 0;
}
