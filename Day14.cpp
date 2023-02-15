// Newton School
// Question of the Day - Alexa and Strings
// 29/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int j;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'a')
        {
            cout << i + 1;
            j = i;
            break;
        }
        else
        {
            j = -1;
        }
    }
    if (j == -1)
        cout << -1;
    return 0;
}