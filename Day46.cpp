// Newton School
// Question of the Day - Distinct Integers
// 03/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
    return 0;
}