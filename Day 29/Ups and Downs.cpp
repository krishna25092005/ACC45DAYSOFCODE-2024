#include <bits/stdc++.h>
using namespace std;

void upsAndDowns(vector<int> &arr, int N)
{
    sort(arr.begin(), arr.end());

    for (int i = 1; i < N - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
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
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        upsAndDowns(A, n);
    }

    return 0;
}
