#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int minPrice = min({a, b, c});        
        int ans = a + b + c - minPrice;

        cout << ans << endl; 
    }

    return 0;
}
