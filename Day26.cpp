// Newton School
// Question of the Day - Maximum Sum Cards
// 10/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    if (k <= a)
        cout << k;
    else if (k <= a + b)
        cout << a;
    else
        cout << (a - (k - a - b));
    return 0;
}