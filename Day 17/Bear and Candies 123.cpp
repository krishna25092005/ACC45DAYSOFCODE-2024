#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int limakCandies = 0, bobCandies = 0;
        int turn = 1;

        while (true)
        {
            if (turn % 2 != 0)
            {
                if (limakCandies + turn > a)
                {
                    cout << "Bob" << endl;
                    break;
                }
                limakCandies += turn;
            }
            else
            {
                if (bobCandies + turn > b)
                {
                    cout << "Limak" << endl;
                    break;
                }
                bobCandies += turn;
            }
            turn++;
        }
    }

    return 0;
}
