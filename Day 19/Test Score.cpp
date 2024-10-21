#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int maxAns = n * x;
        if (y <= maxAns && y % x == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}