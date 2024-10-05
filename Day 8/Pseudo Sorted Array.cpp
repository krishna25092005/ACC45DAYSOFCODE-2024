#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(vector<int> &A)
{
    for (int i = 0; i < A.size() - 1; ++i)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        if (isSorted(A))
        {
            cout << "YES" << endl;
            continue;
        }

        int cnt = 0, idx = -1;
        for (int i = 0; i < N - 1; ++i)
        {
            if (A[i] > A[i + 1])
            {
                cnt++;
                idx = i;
            }
        }

        if (cnt > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
        
            swap(A[idx], A[idx + 1]);
            if (isSorted(A))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
