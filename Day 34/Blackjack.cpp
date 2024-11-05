#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int c = 21 - (a + b);

        if (c >= 1 && c <= 10)
        {
            cout << c << endl;
        }
        else
        {
            cout << -1 << endl; // Not possible to win
        }
    }

    return 0;
}
