// Newton School
// Question of the Day - Bacterias
// 25/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    int x = a * k;
    int count = 1;
    if (a >= 1 && k >= 2 && b >= a)
    {
        if (a == b)
            count = 0;
        else
        {
            while (x < b)
            {
                count++;
                x = x * k;
            }
        }
    }
    cout << count;
    return 0;
}