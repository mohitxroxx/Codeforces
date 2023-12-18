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
    int n,p,l,t;
    cin>>n>>p>>l>>t;
    // if((n*l+2*t)==p)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    int chk=(n-n%7)/7+1;
    if(n%7==0)
    chk-=1;
    int i=1,j=chk;
    int key=chk;
    while(i<=j){
        int m=i+(j-i)/2;
        if(p<=(m+1)/2*l+t*m){
            key=m;
            j=m-1;
        }
        else
        i=m+1;
    }
    int temp=(key+1)/2;
    p=p-(temp*l+t*key);
    int res=temp;
    if(p<0)
    p=0;
    res=res+(p/l);
    res=res+(p%l!=0);
    cout<<n-res<<endl;

    // while(res<=p ){
    //     res+=l+t;
    //     c++;
        // i+=7;
    // }
    // cout<<n-c<<endl;
}
signed main()
{
    MoHiT;

    int tc;
    cin >> tc;
    while (tc--)
        prg();
    return 0;
}