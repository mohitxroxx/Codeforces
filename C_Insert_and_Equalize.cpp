#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i < n; i++)
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
    int ar[n];
    map<int,int> m;
    fi0{
        cin>>ar[i];
        m[ar[i]]=1;
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    sort(ar,ar+n);
    int res=ar[1]-ar[0];
    fi1
    res=__gcd(res,ar[i]-ar[i-1]);
    int x=ar[n-1]-res;
    while(m[x])
    x-=res;
    int y=(ar[n-1]-x)/res;
    fi0
    y+=(ar[n-1]-ar[i])/res;
    cout<<y<<endl;
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