#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x > 50 && x > y && x > z)
        {
            cout << "A" << endl;
        }
        else if (y > 50 && y > x && y > z)
        {
            cout << "B" << endl;
        }
        else if (z > 50 && z > x && z > y)
        {
            cout << "C" << endl;
        }
        else
        {
            cout << "NOTA" << endl;
        }
    }

    return 0;
}
