#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;

        int extraSticks = r / 30;

        int totalSticks = x + extraSticks;

        int maxPlates = (totalSticks + y - 1) / y;

        cout << maxPlates << endl;
    }
    return 0;
}