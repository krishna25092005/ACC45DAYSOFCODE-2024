#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> H(n);
        for (int i = 0; i < n; i++)
        {
            cin >> H[i];
        }

        int time1 = 0;
        for (int health : H)
        {
            time1 += (health + x - 1) / x;
        }

        int time2 = *max_element(H.begin(), H.end());

        cout << min(time1, time2) << endl;
    }

    return 0;
}