// Newton School
// Question of the Day - Puzzle Game
// 05/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    if (a < b)
    {
        for (int i = a; i <= b; i++)
            count++;
    }
    cout << count;
    return 0;
}