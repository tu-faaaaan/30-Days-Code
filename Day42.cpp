// Newton School
// Question of the Day - Digits Printing
// 27/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n % 10;
    n = n / 10;
    cout << n % 10 << temp;
    return 0;
}