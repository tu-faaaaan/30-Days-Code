// Newton School
// Question of the Day - Alexa and Digits
// 14/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if ((i * j) == n)
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}