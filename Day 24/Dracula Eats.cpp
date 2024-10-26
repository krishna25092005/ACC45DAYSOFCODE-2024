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

        int tuesdays = n / 7;
        int remainingDays = n % 7;

        if (remainingDays >= 2)
        {
            tuesdays += 1;
        }

        cout << tuesdays << endl;
    }
    return 0;
}
