#include <bits/stdc++.h>
using namespace std;

int ceil_div(int a, int b)
{
    return (a + b - 1) / b;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;

        int res1 = 1 + ceil_div(h - y, x);

        int res2 = ceil_div(h, x);

        cout << min(res1, res2) << endl;
    }

    return 0;
}
