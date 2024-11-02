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
        // number of ways to choose captain and vice-captain
        int choices = n * (n - 1);
        cout << choices << endl;
    }
    return 0;
}
