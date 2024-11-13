#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> songs(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> songs[i];
        }

        int k;
        cin >> k;

        int len = songs[k - 1];

        sort(songs.begin(), songs.end());

        int newPosition = 0;
        for (int i = 0; i < n; ++i)
        {
            if (songs[i] == len)
            {
                newPosition = i + 1;
                break;
            }
        }

        cout << newPosition << endl;
    }

    return 0;
}
