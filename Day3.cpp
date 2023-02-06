// Newton School
// Question of the Day - Edward and Maths Competition
// 18/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << (n / 2) * (n / 2);
    else
        cout << ((n - 1) / 2) * ((n + 1) / 2);
    return 0;
}