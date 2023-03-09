// Newton School
// Question of the Day - Digit Games
// 20/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, bca, cab;
    cin >> n;
    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;
    bca = b * 100 + c * 10 + a;
    cab = c * 100 + a * 10 + b;
    cout << n + cab + bca;
    return 0;
}