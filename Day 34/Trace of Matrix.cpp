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

        vector<vector<int>> A(n, vector<int>(n));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> A[i][j];
            }
        }

        int maxTrace = 0;

        for (int l = 1; l <= n; ++l)
        {

            for (int i = 0; i <= n - l; ++i)
            {
                for (int j = 0; j <= n - l; ++j)
                {
                    int currentTrace = 0;

                    for (int k = 0; k < l; ++k)
                    {
                        currentTrace += A[i + k][j + k];
                    }

                    maxTrace = max(maxTrace, currentTrace);
                }
            }
        }

        cout << maxTrace << endl;
    }

    return 0;
}
