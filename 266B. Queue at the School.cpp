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
 
using namespace std;
 
void prg()
{
    int s,n;
    cin>>s>>n;
    string st;
    cin>>st;
    string b="B",g="G";
    for(int i=1;i<=n;i++){
        for(int j=0;j<s-1;j++){
            if(st[j]=='B'&&st[j+1]=='G'){
                st.replace(j,1,g);
                st.replace(j+1,1,b);
                j++;
            }
        }
    }
    cout<<st<<endl;
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