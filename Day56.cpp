// Newton School
// Question of the Day - Repeating Strings
// 13/03/2023

#include <bits/stdc++.h>
using namespace std;

string repeat(string s, int n)
{
    string new_s;
    for (int i = 0; i < n; i++)
        new_s += s;
    return new_s;
}

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    if (size == 1)
    {
        s = repeat(s, 6);
        cout << s;
    }
    else if (size == 2)
    {
        s = repeat(s, 3);
        cout << s;
    }
    else if (size == 3)
    {
        s = repeat(s, 2);
        cout << s;
    }
    return 0;
}