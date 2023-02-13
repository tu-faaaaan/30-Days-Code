// Newton School
// Question of the Day - Play with 0's and 2's
// 27/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i;
    cin >> n;
    long long int bin[100];
    for (i = 0; n > 0; i++)
    {
        bin[i] = n % 2;
        n = n / 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if (bin[j] == 1)
        {
            bin[j] = 2;
        }
        cout << bin[j];
    }
    return 0;
}