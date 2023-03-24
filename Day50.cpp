// Newton School
// Question of the Day - Spinning Slots
// 07/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[0] == s[1] && s[1] == s[2])
        cout << "Won";
    else
        cout << "Lost";
    return 0;
}