// Newton School
// Question of the Day - Mall and Coupons
// 16/01/2023

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    ll ans = 0;
    ll curr = 0;

    for (auto &i : a)
    {
        ll req = i / x;
        ll rem = i % x;

        if (k >= req)
        {
            i = rem;
            k -= req;
        }
        else
        {
            if (k != 0)
            {
                i -= k * x;
                k = 0;
            }
            else
            {
                break;
            }
        }
    }

    sort(all(a));
    reverse(all(a));

    ll sum = 0;
    for (int i = k; i < n; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
}

int main()
{
    // Your code here

    solve();

    return 0;
}