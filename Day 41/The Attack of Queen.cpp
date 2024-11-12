#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int attacks = 2 * (n - 1);

        int diag1 = min(x - 1, y - 1) + min(n - x, n - y);
        int diag2 = min(x - 1, n - y) + min(n - x, y - 1);

        int ans = attacks + diag1 + diag2;

        cout << ans << endl;
    }

    return 0;
}
