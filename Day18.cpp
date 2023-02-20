// Newton School
// Question of the Day - Carry or Not?
// 02/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, n;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (((a % 10) + (b % 10)) > 9)
        {
            cout << "Hard";
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "Easy";
    return 0;
}