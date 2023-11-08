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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define inarr for(int i=0;i<n;i++) cin>>ar[i]
#define popcount __builtin_popcount
 
using namespace std;
 
void prg()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    string b;
    cin>>b;
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i])
        continue;
        else if((a[i]=='R'&&b[i]=='S')||(a[i]=='P'&&b[i]=='R')||(a[i]=='S'&&b[i]=='P'))
        c1++;
        else
        c2++;
    }
    if(c1>c2)
    cout<<0<<endl;
    else
    cout<<(c1+c2)/2-c1+1<<endl;
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