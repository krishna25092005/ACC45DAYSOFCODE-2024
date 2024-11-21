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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            int type;
            cin >> type;
            mp[type]++;
        }
        for (auto pair : mp)
        {
            if (pair.second % 2 != 0)
            {
                cout << pair.first << endl;
                break;
            }
        }
    }
    return 0;
}