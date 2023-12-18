#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
#define fit for(auto it:ar)
#define fmp for(auto it:mp)
#define int long long int
#define nl << "\n"
#define MoHiT                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define umap unordered_map
#define pb push_back
#define fv for (int i = 0; i < v.size(); i++)
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define inarr for(int i=0;i<n;i++) cin>>ar[i]
#define popcount __builtin_popcount
#define endl "\n"
 
using namespace std;
 
void prg()
{
        int n;
        cin >> n;
        vector<int> a(n);
        fi0
        cin>>a[i];
        vector<int> b(n+1, 0);
        int res = 0;
        fi1{
            b[i] = a[i - 1];
            res = max(b[i], res);
        }
        unordered_set <int> chk;
        fi1{
            if (chk.find(b[i]) != chk.end()) {
                cout << res << " ";
            } else {
                cout << b[i] << " ";
            }
            chk.insert(b[i]);
        }
        cout << endl;
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