// Newton School
// Question of the Day - Meet in Time
// 16/03/2023

#include <bits/stdc++.h>
using namespace std;

bool is_pallindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string s, p;
    cin >> s;
    int n = s.length();
    p = s;
    int i = 0;
    while (i <= n)
    {
        p = 'a' + p;
        if (is_pallindrome(p))
        {
            cout << "Yes";
            return 0;
        }
        i++;
    }
    cout << "No";
    return 0;
}