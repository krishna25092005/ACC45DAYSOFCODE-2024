#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, A, B;
        cin >> N >> A >> B;

        int rounds = log2(N);

        int totalTime = rounds * A + (rounds - 1) * B;

        cout << totalTime << endl;
    }

    return 0;
}
