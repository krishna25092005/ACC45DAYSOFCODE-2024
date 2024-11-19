#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;

        int diff = s - (x + y);

        if (diff >= z)
        {
            cout << 0 << endl;
        }
        else if ((s - x) >= z || (s - y) >= z)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}