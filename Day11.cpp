// Newton School
// Question of the Day - Unlucky Seven
// 26/01/2023

#include <bits/stdc++.h>
using namespace std;

int n;

bool check(int x)
{
    int fla = 0;

    while (x)
    {
        int c;
        c = x % 8;
        if (c == 7)
        {
            fla = 1;
            break;
        }
        x /= 8;
    }

    if (fla)
        return true;
    else
        return false;
}

bool check2(int x)
{
    int f = 0;
    while (x)
    {
        int c;
        c = x % 10;
        if (c == 7)
            f = 1;
        x /= 10;
    }
    if (f)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check(i) || check2(i))
            ans++;
    }
    cout << n - ans;
    return 0;
}