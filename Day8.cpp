// Newton School
// Question of the Day - Contiguous Substring
// 23/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    if (s.find(t) != -1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}