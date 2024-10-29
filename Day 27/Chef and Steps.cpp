#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> distances(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> distances[i];
        }

        string result = "";
        for (int i = 0; i < n; ++i)
        {
            if (distances[i] % k == 0)
            {
                result += '1';
            }
            else
            {
                result += '0';
            }
        }

        cout << result << endl;
    }

    return 0;
}
