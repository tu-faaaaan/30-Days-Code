// Newton School
// Question of the Day - Maximum Operations
// 17/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int ans = 0;
    bool flag = true;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (flag != false)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                count++;
            else
            {
                flag = false;
                break;
            }
        }
        if (count == n)
        {
            for (int i = 0; i < n; i++)
                arr[i] = arr[i] / 2;
            ans++;
        }
        count = 0;
    }
    cout << ans;
    return 0;
}
