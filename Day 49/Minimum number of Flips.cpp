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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cnt++;
            }
        }

        int cnt1 = n - cnt;

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (cnt == cnt1)
            {
                cout << 0 << endl;
            }
            else if (cnt > cnt1)
            {
                cout << (cnt - cnt1) / 2 << endl;
            }
            else
            {
                cout << (cnt1 - cnt) / 2 << endl;
            }
        }
    }

    return 0;
}