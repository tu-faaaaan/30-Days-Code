// Newton School
// Question of the Day - Puzzle Game
// 06/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a * 2 + b * 2) < c * 2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}