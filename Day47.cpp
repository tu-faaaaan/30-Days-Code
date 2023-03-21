// Newton School
// Question of the Day - Dice Game
// 04/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a * 1 <= b && b <= a * 6)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}