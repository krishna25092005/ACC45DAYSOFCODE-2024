#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        unordered_map<char, int> jewelCount;

        for (char jewel : S)
        {
            jewelCount[jewel]++;
        }

        int minCost = 0;

        for (auto [jewel, count] : jewelCount)
        {
            minCost += (count + 1) / 2;
        }

        cout << minCost << endl;
    }
    return 0;
}
