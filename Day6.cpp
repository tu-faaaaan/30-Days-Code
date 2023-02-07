// Newton School
// Question of the Day - Abhas and Numbers
// 21/01/2023

#include "bits/stdc++.h"
using namespace std;

long countTriplets(int N, int K)
{
    if (K % 2 == 0)
    {
        long long int x = N / K;
        long long int y = (N + (K / 2)) / K;

        return x * x * x + y * y * y;
    }
    else
    {
        long long int x = N / K;
        return x * x * x;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << countTriplets(n, k);
    return 0;
}
