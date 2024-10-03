#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        int current_people = x;
        int max_people = x;

        for (int i = 0; i < n; ++i)
        {
            current_people += A[i];
            max_people = max(max_people, current_people);
        }

        cout << max_people << endl;
    }

    return 0;
}
