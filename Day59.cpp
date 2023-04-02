// Newton School
// Question of the Day - Meet in Time
// 16/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, t, s;
    cin >> d >> t >> s;
    if (d / s <= t)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}