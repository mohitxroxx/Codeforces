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
    string s;
    cin>>s;
    bool chk=true;
    for(int i=1;i<s.length();i++){
        if(s[i]>=97&&s[i]<=122)
        chk=false;
    }
    if(chk){
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    // char c=toupper(s[0]);
    string res="";
    // res=c+s.substr(1);
    for(int i=0;i<s.length();i++){
        if(islower(s[i]))
        res+=toupper(s[i]);
        else
        res+=tolower(s[i]);
    }
    cout<<res<<endl;
    }
    else
    cout<<s<<endl;
}
signed main()
{
    MoHiT;

    int t=1;
    // cin >> t;
    while (t--)
        prg();
    return 0;
}