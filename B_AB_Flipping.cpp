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
    string s;
    cin>>s;
    int res=0;
    int j=0;
    for(int i=0;i<=s.length()-1;i++){
        if(s.substr(i,2)=="AB"){
        res++;
        s[i]='B';
        s[i+1]='A';
        for(int k=i-1;k>=j;k--){
            if(s.substr(k,2)=="AB"){
                res++;
                s[k]='B';
                s[k+1]='A';
            }
        }
        j=i+1;
        }
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
