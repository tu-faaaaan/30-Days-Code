// Newton School
// Question of the Day - Sunny or Rainy?
// 12/03/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[n - 1] == 'o')
        cout << "Yes";
    else
        cout << "No";
    return 0;
}