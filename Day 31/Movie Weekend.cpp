#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> L(n), R(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> L[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> R[i];
        }

        int bestIndex = 0;
        int max = L[0] * R[0];
        int bestRating = R[0];

        for (int i = 1; i < n; ++i)
        {
            int curr = L[i] * R[i];
            if (curr > max)
            {
                max = curr;
                bestRating = R[i];
                bestIndex = i;
            }
            else if (curr == max)
            {
                if (R[i] > bestRating)
                {
                    bestRating = R[i];
                    bestIndex = i;
                }
                else if (R[i] == bestRating && i < bestIndex)
                {
                    bestIndex = i;
                }
            }
        }

        cout << (bestIndex + 1) << endl;
    }

    return 0;
}
