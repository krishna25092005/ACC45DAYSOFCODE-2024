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

        vector<int> L(n), G(n);

        for (int i = 0; i < n; i++)
        {
            cin >> L[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> G[i];
        }

        bool frontFits = true, backFits = true;

        for (int i = 0; i < n; i++)
        {
            if (L[i] > G[i])
            {
                frontFits = false;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (L[i] > G[n - 1 - i])
            {
                backFits = false;
                break;
            }
        }

        if (frontFits && backFits)
        {
            cout << "both" << endl;
        }
        else if (frontFits)
        {
            cout << "front" << endl;
        }
        else if (backFits)
        {
            cout << "back" << endl;
        }
        else
        {
            cout << "none" << endl;
        }
    }
    return 0;
}
