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
        vector<int> A(N);

        unordered_map<int, int> freq;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            freq[A[i]]++;
        }

        int maxFreq = 0;
        for (auto entry : freq)
        {
            if (entry.second > maxFreq)
            {
                maxFreq = entry.second;
            }
        }
        cout << N - maxFreq << endl;
    }

    return 0;
}
