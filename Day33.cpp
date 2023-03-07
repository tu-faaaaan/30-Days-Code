// Newton School
// Question of the Day - Minimise Time Travel
// 18/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q, r;
    cin >> p >> q >> r;
    cout << min(p + r, min(p + q, q + r));
    return 0;
}