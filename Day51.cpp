// Newton School
// Question of the Day - Digits Sum
// 08/03/2023

#include <bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    int a, b, sumA, sumB;
    cin >> a >> b;
    sumA = digitSum(a);
    sumB = digitSum(b);
    cout << max(sumA, sumB);
    return 0;
}