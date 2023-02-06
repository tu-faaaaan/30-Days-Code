// Newton School
// Question of the Day - Friends Or Not?!
// 17/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, co = 0, ce = 0, x, y;
    cin >> n;
    if (n >= 3 && n <= (100000))
    {
        int arr[2 * n];
        for (int i = 0; i < ((2 * n) - 2); i = i + 2)
        {
            cin >> x >> y;
            if (x >= 1 && x <= n && y >= 1 && y <= n)
            {
                arr[i] = x;
                arr[i + 1] = y;
            }
        }
        for (int i = 0; i < ((2 * n) - 2); i = i + 2)
        {
            if (arr[0] == arr[i] || arr[0] == arr[i + 1])
            {
                ce++;
            }
            if (arr[1] == arr[i] || arr[1] == arr[i + 1])
            {
                co++;
            }
        }
        if (co == (n - 1) || ce == (n - 1))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}