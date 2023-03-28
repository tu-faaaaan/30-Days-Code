// Newton School
// Question of the Day - Function Games
// 11/03/2023

#include <bits/stdc++.h>
using namespace std;

long int fg(int x)
{
    long func = x * x + 2 * x + 3;
    return func;
}

int main()
{
    int t;
    cin >> t;
    long ans = fg(fg(fg(t) + t) + fg(fg(t)));
    cout << ans;
    return 0;
}