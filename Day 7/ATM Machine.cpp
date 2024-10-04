#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> A(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            if (A[i] <= k)
            {
                ans += '1';
                k -= A[i];
            }
            else
            {
                ans += '0';
            }
        }
        cout << ans << endl;
    }

    return 0;
}
