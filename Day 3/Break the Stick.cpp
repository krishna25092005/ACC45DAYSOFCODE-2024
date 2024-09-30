/*

https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BREAKSTICK
Problem: Break the Stick
Chef has a stick of length N, and he can break it into 2 or more parts such that the parity (odd or even) of the length of each part is the same. For example, if the stick has a length of 11, Chef can break it into parts like {3, 3, 5}, since all parts are odd. However, he cannot break it into parts like {5, 6} since one is odd and the other is even.
Chef can continue breaking the smaller sticks obtained from the original stick as many times as he likes.

Your task is to determine if Chef can obtain a stick of length exactly X by breaking the stick, given that he can only break the stick according to the given parity condition.

Input Format:
The first line contains an integer T — the number of test cases.
Each of the next T lines contains two space-separated integers N and X, where:
N is the initial length of the stick.
X is the length Chef wants to obtain.

Output Format:
For each test case, output YES if Chef can obtain a stick of length exactly X, and NO otherwise.
Each letter of the output may be printed in either lowercase or uppercase (e.g., YES, yEs, and Yes are considered the same).

Constraints:
1 ≤ T ≤ 1000
1 ≤ X < N ≤ 10^9

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int N, X;
        cin >> N >> X;

        if (X > N)
        {
            cout << "NO" << endl;
        }

        else if (N == X)
        {
            cout << "YES" << endl;
        }

        else
        {

            if (N % 2 == 0 && X % 2 == 1)
            {
                cout << "YES" << endl;
            }

            else if (N % 2 == X % 2)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
