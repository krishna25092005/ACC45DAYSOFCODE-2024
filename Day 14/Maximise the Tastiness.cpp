#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int max1 = max(a, b);
        int max2 = max(c, d);

        cout << (max1 + max2) << endl;
    }

    return 0;
}
