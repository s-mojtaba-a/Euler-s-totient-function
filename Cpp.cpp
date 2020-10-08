#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(v) (v).begin(), (v).end()

template <typename T>
T totient(T n)
{
    T ans = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans -= ans / i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        ans -= ans / n;
    return ans;
}

template <typename T>
T totient_1_to_n(T n, T ans[])
{
    ans[0] = 0;
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
        ans[i] = i;
    for (int i = 2; i <= n; i++)
    {
        if (ans[i] == i)
        {
            for (int j = i; j <= n; j += i)
                ans[j] -= (ans[j] / i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
