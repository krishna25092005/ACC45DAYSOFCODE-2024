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

        vector<int> ans(11, 0);

        for (int i = 0; i < n; i++)
        {
            int idx;
            cin >> idx;
            ans[idx]++;
        }

        int max = 0;
        int bestLaptop = -1;
        bool flag = false;

        for (int i = 1; i <= 10; i++)
        {
            if (ans[i] > max)
            {
                max = ans[i];
                bestLaptop = i;
                flag = false;
            }
            else if (ans[i] == max)
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "COnFUSED" << endl;
        }
        else
        {
            cout << bestLaptop << endl;
        }
    }

    return 0;
}
