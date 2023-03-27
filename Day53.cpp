// Newton School
// Question of the Day - Logic Squares
// 10/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 3; i > 0; i--)
        s[i] = s[i - 1];
    s[0] = '0';
    cout << s;
    return 0;
}