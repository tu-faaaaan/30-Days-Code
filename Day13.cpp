// Newton School
// Question of the Day - MEX
// 28/01/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 2000)
    {
        int arr[n], x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x >= 0 && x <= 2000)
            {
                arr[i] = x;
            }
        }
        for (int i = 0; i <= 2000; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x = i;
                if (i == arr[j])
                {
                    x = -1;
                    break;
                }
            }
            if (x != -1)
            {
                cout << x;
                break;
            }
        }
    }
}