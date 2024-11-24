#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int diff = a - b;
    string s = to_string(diff);

    if (s[0] != '1')
    {
        s[0] = '1';
    }
    else
    {
        s[0] = '2';
    }

    cout << s << endl;

    return 0;
}