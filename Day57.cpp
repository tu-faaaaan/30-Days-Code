// Newton School
// Question of the Day - Emilia and Bitwise Xor
// 14/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    for (int i = 0; i < 256; i++)
    {
        if ((a ^ i) == b)
        {
            c = i;
            break;
        }
    }
    cout << c;
    return 0;
}