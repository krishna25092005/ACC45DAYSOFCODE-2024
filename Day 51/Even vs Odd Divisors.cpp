#include <iostream>
using namespace std;

int countEvenDivisors(int N)
{
    int count = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (N % i == 0 && i % 2 == 0)
        {
            ++count;
        }
    }
    return count;
}

int countOddDivisors(int N)
{
    int count = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (N % i == 0 && i % 2 != 0)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int fN = countEvenDivisors(n);
        int gN = countOddDivisors(n);

        if (fN > gN)
        {
            cout << 1 << endl;
        }
        else if (fN == gN)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}