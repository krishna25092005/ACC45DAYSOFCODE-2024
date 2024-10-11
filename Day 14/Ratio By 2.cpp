#include <bits/stdc++.h>
using namespace std;

void minimumOperations(int x, int y)
{
    if (x >= 2 * y || y >= 2 * x)
    {
        cout << 0 << endl;
        return;
    }
    if (x > y)
    {
        swap(x, y);
    }
    cout << abs(min(2 * x - y, y / 2 - x));
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;

        minimumOperations(x, y);
    }

    return 0;
}