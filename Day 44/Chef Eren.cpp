#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int oddCount = (n + 1) / 2;
        int evenCount = n / 2;

        int total = (oddCount * b) + (evenCount * a);

        cout << total << endl;
    }

    return 0;
}
