// Newton School
// Question of the Day - String Sequence
// 08/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[30];
    string temp, s = "";
    for (int i = 0; i < 26; i++)
    {
        cin >> arr[i];
        temp = (96 + arr[i]);
        s.append(temp);
    }
    cout << s;
    return 0;
}