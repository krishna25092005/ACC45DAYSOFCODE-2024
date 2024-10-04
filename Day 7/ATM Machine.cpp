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

        vector<int> A(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        string result = "";

        for (int i = 0; i < n; i++)
        {
            if (A[i] <= k)
            {
                result += '1';
                k -= A[i];
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
