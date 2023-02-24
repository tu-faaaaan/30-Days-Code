// Newton School
// Question of the Day - Shifted Strings
// 06/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            int shift = s[i] + n;
            if (shift > 90)
            {
                shift = 65 + (shift - 91);
                s[i] = shift;
            }
            else
                s[i] += n;
        }
        else
            return 0;
    }
    cout << s;
    return 0;
}