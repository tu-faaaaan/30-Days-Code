// Newton School
// Question of the Day - Sum Modulo
// 16/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if (n % sum == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}