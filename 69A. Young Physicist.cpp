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
    int n;
    cin>>n;
    int a[3*n];
    for(int i=0;i<(3*n);i++){
        cin>>a[i];
    }
    int x=0,y=0,z=0;
    for(int i=2;i<(3*n);i+=3){
        x+=a[i-2];
        y+=a[i-1];
        z+=a[i];
    }
    if((x==0)&&(y==0)&&(z==0))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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