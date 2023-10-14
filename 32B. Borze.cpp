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
    string s;
    cin>>s;
    string res="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.')
        res+='0';
        else if(s[i]=='-'&&s[i+1]=='.'){
            res+='1';
            i++;
        }
        else if(s[i]=='-'&&s[i+1]=='-'){
            res+='2';
            i++;
        }
    }
    cout<<res<<endl;
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