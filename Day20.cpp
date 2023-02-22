// Newton School
// Question of the Day - Chipmunk and Nuts
// 04/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, nuts = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 10)
            nuts += (arr[i] - 10);
    }
    cout << nuts;
    return 0;
}