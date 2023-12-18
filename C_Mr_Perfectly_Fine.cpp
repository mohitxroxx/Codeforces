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
    cin>>n;
    int x,a=INT_MAX,b=INT_MAX,c=INT_MAX;
    string s;
    fi0{
        cin>>x>>s;
        if(s=="11")
        a=min(a,x);
        if(s=="10")
        b=min(b,x);
        if(s=="01")
        c=min(c,x);
    }
    if(a!=INT_MAX||(b!=INT_MAX&&c!=INT_MAX))
    cout<<min(a,(b+c))<<endl;
    else
    cout<<-1<<endl;
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