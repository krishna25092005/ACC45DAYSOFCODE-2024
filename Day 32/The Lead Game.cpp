#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 0;
    int winner = 0;
    int score1 = 0;
    int score2 = 0;

    for (int i = 0; i < n; ++i)
    {
        int si, ti;
        cin >> si >> ti;

        score1 += si;
        score2 += ti;

        int curr = abs(score1 - score2);
        if (curr > max)
        {
            max = curr;
            winner = (score1 > score2) ? 1 : 2;
        }
    }

    cout << winner << " " << max << endl;

    return 0;
}