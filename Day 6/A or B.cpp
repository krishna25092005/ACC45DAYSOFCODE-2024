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

        int A = (500 - x * 2) + (1000 - (x + y) * 4);

        int B = (1000 - y * 4) + (500 - (x + y) * 2);

        cout << max(A, B) << endl;
    }
    return 0;
}