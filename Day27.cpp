// Newton School
// Question of the Day - Number Games
// 11/02/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, k;
    cin >> n >> k;
    while (k)
    {
        if (n % 200 == 0)
            n = n / 200;
        else
        {
            string str = to_string(n);
            str += "200";
            n = stoll(str);
        }
        k--;
    }
    cout << n;
    return 0;
}


// Python Code

// n, K = map(int, input().split())

// while (int(K)) :
// {
//     if (int(n) % 200 == 0):
//     {
//         n = int(n)
//         n = n // 200
//     }
//     else:
//     {
//         n=str(n)
//         n=n+"200"
//     }
//     K-=1
// }
// print(n)