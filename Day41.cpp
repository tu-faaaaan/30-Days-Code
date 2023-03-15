// Newton School
// Question of the Day - Finding Character
// 26/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    char arr[10000];
    char j = 'A';
    int i = 0, k = 0;
    while (j != 92)
    {
        if (i < n)
        {
            arr[k] = j;
            k++;
            i++;
        }
        else
        {
            j++;
            i = 0;
        }
    }
    cout << arr[x - 1];
    return 0;
}