// Newton School
// Question of the Day - Potential Stones
// 19/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, x;
    cin >> k >> x;
    for (int i = x - k + 1; i < x + k; i++)
        cout << i << " ";
    return 0;
}