#include <bits/stdc++.h> // header file includes every Standard library
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