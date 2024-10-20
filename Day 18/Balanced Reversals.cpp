#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string A;

        cin >> N;
        cin >> A;

        int zerosCount = 0, onesCount = 0;

        for (char c : A)
        {
            if (c == '0')
            {
                zerosCount++;
            }
            else
            {
                onesCount++;
            }
        }

        string result = string(zerosCount, '0') + string(onesCount, '1');

        cout << result << endl;
    }

    return 0;
}
