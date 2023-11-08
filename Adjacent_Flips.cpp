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
    string res;
    for(auto it:s){
        if(!res.size()||res.back()!=it)
        res.push_back(it);
        else
        res.pop_back();
    }
    if(res.size()<2)
    yes;
    else
    no;
    // int o=0,z=0;
    // for(int i=0;i<s.length()-2;i++){
    //     if(s[i]==s[i+1]&&s[i]=='1')
    //     z++;
    //     if(s[i]==s[i+1]&&s[i]=='0')
    //     o++;
    // }
    // if((z==0||o==0)&&(z!=o))
    // yes;
    // else
    // no;
    // vector<char> s;
    // for(char it:st){
    // if(it=='0')
    // z++;
    // else
    // o++;
    // s.push_back(it);
    // }
    // if(z==n||o==n){
    //     yes;
    //     return;
    // }
    // for(int i=0;i<s.size()-2;i++){
    //     if(s[i]=='0'&&s[i+1]=='0'){
    //         s[i]='1';
    //         s[i+1]='1';
    //     }
    //     else if(s[i]=='1'&&s[i+1]=='1'){
    //         s[i]='0';
    //         s[i+1]='0';
    //     }
    // }
    // o=0;z=0;
    // for(auto ch:s){
    //     if(ch=='1')
    //     o++;
    //     else
    //     z++;
    // }
    // cout<<o<<" "<<z<<endl;
    // if(o==n-1||z==n-1)
    // yes;
    // else
    // no;
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