/*

https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/OFFICE
Problem: Chef in his Office
Chef recently joined a new company where employees have specific working hours. From Monday to Thursday, employees work for X hours each day. On Friday, which is referred to as Chill Day, employees work for Y hours, where Y < X. Saturdays and Sundays are holidays.

Your task is to determine the total number of working hours in a week for Chef.

Input Format:
The first line contains an integer T — the number of test cases.
For each test case, a single line follows containing two space-separated integers:
X — the number of working hours each day from Monday to Thursday.
Y — the number of working hours on Friday (where Y < X).

Output Format:
For each test case, output the total number of working hours Chef works in one week.

Constraints:
1 ≤ T ≤ 100 (Number of test cases)
2 ≤ X ≤ 12 (Working hours from Monday to Thursday)
1 ≤ Y < X (Working hours on Friday)

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << (x * 4) + y << endl;
    }
    return 0;
}
