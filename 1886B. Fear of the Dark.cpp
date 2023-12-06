#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
#define fit for(auto it:ar)
#define fmp for(auto it:mp)
#define int long long int
#define nl << "\n"
#define cp                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define umap unordered_map
#define pb push_back
#define fv for (int i = 0; i < v.size(); i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define inarr for(int i=0;i<n;i++) cin>>ar[i]
 
using namespace std;
 
void prg()
{
    int p1,p2,a1,a2,b1,b2;
    cin>>p1>>p2>>a1>>a2>>b1>>b2;
    double d,x,y, res=1000;
    cout<<setprecision(11);
    d=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2))/2;
    x=sqrt((p1-b1)*(p1-b1)+(p2-b2)*(p2-b2));
    y=sqrt((p1-a1)*(p1-a1)+(p2-a2)*(p2-a2));
    if(x<=d||y<=d)
    res=min(d,res);
    if(d*2<=2*x)
    res=min(x,res);
    if(d*2<=2*y)
    res=min(y,res);
    cout<<res<<endl
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