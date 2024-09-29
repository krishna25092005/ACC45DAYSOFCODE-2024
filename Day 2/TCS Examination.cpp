/*

https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EXAMTIME
TCS Examination
Two friends, Dragon and Sloth, are writing a computer science examination series. There are three subjects in this series:
DSA, TOC, and DM. Each subject carries 100 marks.

You know the individual scores of both Dragon and Sloth in all 3 subjects. You have to determine who got a better rank.

The rank is decided as follows:

    * The person with a bigger total score gets a better rank.
    * If the total scores are tied, the person who scored higher in DSA gets a better rank.
    * If the total score and the DSA score are tied, the person who scored higher in TOC gets a better rank.
    * If everything is tied, they get the same rank.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers denoting the scores of Dragon in DSA, TOC and DM respectively.
The second line of each test case contains three space-separated integers denoting the scores of Sloth in DSA, TOC and DM respectively.

Output Format
For each test case, if Dragon got a better rank then output "Dragon", else if Sloth got a better rank then output "Sloth". If there was a tie then output "Tie". Note that the string you output should not contain quotes.
The output is case insensitive. For example, If the output is "Tie" then "TiE", "tiE", "tie", etc are also considered correct.

Constraints
1 ≤ T ≤ 1000
* Each score of both Dragon and Sloth lies between 0 and 100.

Subtasks
Subtask #1 (100 points): Original constraints

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a, b, c;
        cin >> a >> b >> c;

        int dragonSum = x + y + z;
        int slothSum = a + b + c;

        if (dragonSum > slothSum)
        {
            cout << "Dragon" << endl;
        }
        else if (slothSum > dragonSum)
        {
            cout << "Sloth" << endl;
        }
        else
        {

            if (x > a)
            {
                cout << "Dragon" << endl;
            }
            else if (a > x)
            {
                cout << "Sloth" << endl;
            }
            else
            {

                if (y > b)
                {
                    cout << "Dragon" << endl;
                }
                else if (b > y)
                {
                    cout << "Sloth" << endl;
                }
                else
                {

                    cout << "Tie" << endl;
                }
            }
        }
    }

    return 0;
}
