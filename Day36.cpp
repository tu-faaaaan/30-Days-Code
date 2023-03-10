// Newton School
// Question of the Day - String Analysis
// 21/02/2023

#include <bits/stdc++.h>
using namespace std;

static bool endsWith(string str, string suffix)
{
    return str.size() >= suffix.size() && 0 == str.compare(str.size() - suffix.size(), suffix.size(), suffix);
}

int main()
{
    string s;
    cin >> s;
    if (endsWith(s, "er"))
        cout << "er";
    if (endsWith(s, "ist"))
        cout << "ist";
    return 0;
}