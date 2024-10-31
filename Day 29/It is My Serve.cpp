#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int p, q;
        cin >> p >> q;

        int total_points = p + q;
        int serve_turn = (total_points / 2) % 2;

        if (serve_turn == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
