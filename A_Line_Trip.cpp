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

int cal(int a,int b){
    return b-a;
}
void prg()
{
    int n,x;
    cin>>n>>x;
    int ar[n+1];
    for(int i=1;i<=n;i++)
    cin>>ar[i];
    // int sum[n];
    // partial_sum(ar,ar+n,sum,cal);
    int xx=0;
    ar[0]=0;
    for(int i=0;i<n;i++){
        xx=max(xx,ar[i+1]-ar[i]);
    }
    // for(int i:sum)
    // cout<<i<<" "<<endl;
    // sort(sum,sum+n);
    if(n==0){
    cout<<xx<<endl;
    return;
    }
    // cout<<xx;
    cout<<max(xx,(x-ar[n])*2)<<endl;
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