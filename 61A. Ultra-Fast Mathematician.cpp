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
    string x,y;
    cin>>x>>y;
    // string x=to_string(a);
    // string y=to_string(b);
    int n=x.length();
    string res="";
    for(int i=0;i<n;i++){
        if(x[i]==y[i])
        res='0'+res;
        else
        res='1'+res;
    }
    reverse(res.begin(), res.end());
    cout<<res<<endl;
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