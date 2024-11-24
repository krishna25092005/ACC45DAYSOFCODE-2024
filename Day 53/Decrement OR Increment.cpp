#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        n++;
    }
    else
    {
        n--;
    }
    cout << n << endl;
}
