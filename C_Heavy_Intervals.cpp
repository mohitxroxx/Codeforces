#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
#define fit for (auto it : ar)
#define fmp for (auto it : mp)
#define int long long int
#define nl << "\n"
#define MoHiT                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define umap unordered_map
#define pb push_back
#define fv for (int i = 0; i < v.size(); i++)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define inarr                   \
    for (int i = 0; i < n; i++) \
    cin >> ar[i]
#define popcount __builtin_popcount
#define endl "\n"

using namespace std;

int ncr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}

bool isVowel(char s)
{
    if (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U' || s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    {
        return true;
    }
    return false;
}

void prg()
{
    int n;
    cin >> n;
    vector<int> l(n), r(n), c(n);
    fi0
        cin >> l[i];
    fi0
        cin >> r[i];
    fi0
        cin >> c[i];
    sort(c.begin(), c.end(), greater<int>());
    vector<int> v,cur;
    vector<pair<int, char>> vp;
    fi0{
        vp.push_back({l[i], 'l'});
        vp.push_back({r[i], 'r'});
    }
    sort(vp.begin(), vp.end());
    for (auto x : vp){
        if (x.second == 'l')
            cur.push_back(x.first);
        else{
            v.push_back((x.first - cur[cur.size()-1]));
            // cur.erase(cur.size()-1);
            cur.pop_back();
        }
    }
    sort(v.begin(), v.end());
    int res = 0;
    fi0
    res += (v[i] * c[i]);
    cout << res << endl;
}
signed main()
{
    MoHiT;

    int t;
    cin >> t;
    while (t--)
        prg();
    return 0;
}