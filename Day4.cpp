// Newton School
// Question of the Day - Even Numbers - 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = n + 1; i < m; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            count++;
        }
        if (count == 5)
            break;
    }
    return 0;
}