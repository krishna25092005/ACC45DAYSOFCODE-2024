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
        vector<int> P(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> P[i];
        }

        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            freq[P[i]]++;
        }

        bool possible = true;

        for (auto entry : freq)
        {
            int groupSize = entry.first;
            int count = entry.second;

            if (count % groupSize != 0)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}