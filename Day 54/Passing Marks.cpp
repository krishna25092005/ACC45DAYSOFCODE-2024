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

        vector<int> marks(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> marks[i];
        }

        // Sort the marks in descending order
        sort(marks.begin(), marks.end(), greater<int>());

        int passingMark = marks[x - 1] - 1;

        cout << passingMark << endl;
    }

    return 0;
}