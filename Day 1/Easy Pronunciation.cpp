/*
https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK
Easy Pronunciation
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.
We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.
For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of string S.
The second line of each test case contains the string S.

Output Format
For each test case, output on a new line the answer — YES if S is easy to pronounce, and NO otherwise.

Constraints

1 ≤ T ≤ 100
1 ≤ N ≤ 100
S contains only lowercase Latin characters, i.e, the characters {a,b,c,…,z}

*/
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int consonantCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (!isVowel(s[i]))
            {
                consonantCount++;
                if (consonantCount >= 4)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                consonantCount = 0;
            }

            if (i == n - 1)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
