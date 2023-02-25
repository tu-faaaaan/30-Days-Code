// Newton School
// Question of the Day - Cards Shuffle
// 07/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> mpp;

    int n;
    cin >> n;
    n *= 4;

    while (n-- > 1)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }

    for (auto &it : mpp)
    {
        if (it.second < 4)
        {
            cout << it.first;
            return 0;
        }
    }
    return 0;
}