#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
#define fit for (auto it : ar)
#define fmp for (auto it : mp)
#define int long long int
#define nl << "\n"
#define cp                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define umap unordered_map
#define pb push_back
#define fv for (int i = 0; i < v.size(); i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define inarr                   \
    for (int i = 0; i < n; i++) \
    cin >> ar[i]

using namespace std;

//https://codeforces.com/problemset/problem/363/B

void prg()
{
    int n, k, sum = 0, ans = 1;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i < k)
            sum += a[i];
    }
    int min = sum;
    for (int i = 1; i < n - k + 1; i++)
    {
        sum -= a[i - 1];
        sum += a[k + i - 1];
        if (min > sum)
        {
            min = sum;
            ans = i + 1;
        }
    }
    cout << ans << endl;
}
signed main()
{
    cp;
    int t=1;
    // cin >> t;
    while (t--)
        prg();
    return 0;
}