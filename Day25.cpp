// Newton School
// Question of the Day - Multiple of 3
// 09/02/2023

#include <bits/stdc++.h>
using namespace std;

int helper(long N)
{
    if (N % 3 == 0)
        return 0;
    int digit[100];
    int sum = 0;
    long temp = N;
    while (N > 0)
    {
        sum += (int)(N % 10);
        digit[(int)(N % 10)]++;
        N /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        int val = sum - (sum / 3) * 3 + 3 * i;
        if (val > 0 && val < 10 && digit[val] > 0)
            return 1;
    }
    return temp > 100 ? 2 : -1;
}

int main()
{
    long n;
    cin >> n;
    cout << helper(n);
    return 0;
}