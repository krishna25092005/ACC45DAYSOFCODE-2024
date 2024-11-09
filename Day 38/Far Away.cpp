#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= m / 2)
                sum += m - a[i];
            else
                sum += a[i] - 1;
        }
        cout << sum << endl;
    }
    return 0;
}
