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
 
using namespace std;
 
void prg()
{
    int n;
    cin>>n;
    int ar[n];
    int x=0;
    for(int i=0;i<n;i++){
    cin>>ar[i];
    x=x^ar[i];
    }
    int res=x;
    // if(res==0){
    //     cout<<0<<endl;
    //     return;
    // }
    for(int it:ar){
        res=min(res,x^it);
    }
    cout<<res<<endl;
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