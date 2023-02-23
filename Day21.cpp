// Newton School
// Question of the Day - Bob and Digits
// 05/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int digits = 0;
    int temp = N;
    while (temp > 0)
    {
        temp /= K;
        digits++;
    }
    cout << digits << endl;
    return 0;
}
