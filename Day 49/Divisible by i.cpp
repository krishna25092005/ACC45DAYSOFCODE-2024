#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<int> P(n);
    int count = 0;

    for (int i = n - 1; i >= 0; i -= 2)
    {
        P[i] = n - count;
        count++;
    }

    count = 1;

    for (int i = n - 2; i >= 0; i -= 2)
    {
        P[i] = count;
        count++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << P[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
