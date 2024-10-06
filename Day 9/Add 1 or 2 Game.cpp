#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "ALICE" << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << "BOB" << endl;
            continue;
        }

        else
            cout << "BOB" << endl;
    }

    return 0;
}