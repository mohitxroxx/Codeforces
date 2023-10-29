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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    string t;
    cin>>t;
    int a=0,b=0;
    for(int i=0;i<m-1;i++)
    if((t[i]=='0' && t[i+1]=='1') || t[i]=='1' && t[i+1]=='0'){
        a++;
    }
    for(int i=0;i<n-1;i++)
    if(s[i]==s[i+1]){
        b++;
    }
    int o=0,z=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]&&s[i]=='1')
        o++;
        if(s[i]==s[i+1]&&s[i]=='0')
        z++;
    }
    if(b==0)
    yes;
    else if((a!=m-1)||(t[0]!=t[m-1]))
    no;
    else{
        if(o>0&&z>0)
        no;
        else if((z>0&&t[0]=='0')||(o>0 && t[0]=='1'))
        no;
        else
        yes;
    }
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
