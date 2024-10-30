#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        long long A[n];

        long long sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum2 += A[i];
        }
        sum1 = sum2 / (n + 1);
        for (int i = 0; i < n; i++)
        {
            cout << A[i] - sum1 << " ";
        }
        cout << endl;
    }
}