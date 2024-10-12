#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        unordered_map<int, int> freq;

        for (int i = 0; i < N; i++)
        {
            int animal;
            cin >> animal;
            freq[animal]++;
        }

        bool possible = true;

        for (auto entry : freq)
        {
            if (entry.second % 2 != 0)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
