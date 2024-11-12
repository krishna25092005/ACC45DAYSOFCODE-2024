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

        int buckets = x / y;
        int people = buckets / 2;
        cout << people << endl;
    }

    return 0;
}
