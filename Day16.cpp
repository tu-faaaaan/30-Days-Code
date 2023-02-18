// Newton School
// Question of the Day - Prefix Strings
// 31/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    if (s.size() > t.size())
    {
        puts("No");
    }

    else
    {
        bool ok = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
            {
                ok = false;
            }
        }

        if (ok)
            cout << "Yes";
        else
            cout << "No";
    }
}