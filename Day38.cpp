// Newton School
// Question of the Day - Multiple Search
// 23/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[100];
    int j = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            arr[j] = i;
            j++;
        }
    }
    if (j == 0)
        cout << -1;
    else
        cout << arr[0];
    return 0;
}