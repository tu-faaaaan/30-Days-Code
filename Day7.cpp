// Newton School
// Question of the Day - Matching Strings
// 22/01/2023

#include <bits/stdc++.h>
using namespace std;
bool check(string s, string k, int a)
{
    bool x = true;
    for (int i = 0; i < a; i++)
    {

        if (s[i] != k[i])
        {
            if (x)
            {
                swap(s[i], s[i + 1]);
                x = false;
            }
            if (s[i] != k[i])
                return false;
        }
    }
    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;
    int a = s.length(), b = t.length();
    if (a != b)
        cout << "No" << endl;
    else
    {
        if (check(s, t, a))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}