#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x >= y)
        {

            cout << 0 << endl;
        }
        else
        {

            cout << (y - 1) / x << endl;
        }
    }

    return 0;
}
