#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int distance = abs(a - b);
        int steps = (distance + k - 1) / k;
        cout << steps << endl;
    }
    return 0;
}
