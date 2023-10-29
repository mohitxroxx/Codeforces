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

void prg()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0,d=0;
    for (char ch:s)
    {
        if (ch == 'A')
            a = a + 1;
        else
            d = d + 1;
    }
    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}
signed main()
{
    cp;
    int t;
    cin >> t;
    while (t--)
        prg();
    return 0;
}