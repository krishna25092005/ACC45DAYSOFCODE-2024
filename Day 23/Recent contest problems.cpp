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
        vector<string> contests(n);

        int cnt1 = 0;
        int cnt2 = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> contests[i];
            if (contests[i] == "START38")
            {
                cnt1++;
            }
            else if (contests[i] == "LTIME108")
            {
                cnt2++;
            }
        }

        cout << cnt1 << " " << cnt2 << endl;
    }

    return 0;
}
