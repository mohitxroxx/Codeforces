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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define inarr for(int i=0;i<n;i++) cin>>ar[i]
#define popcount __builtin_popcount
#define endl "\n"
 
using namespace std;
bool chk(char ch){
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    return true;
    return false;
}
void prg()
{
    string s;
    cin>>s;
    // int res=0;
    string val="CODETOWN";
    // vector<int> mp;
    // bool res=false;
    // for(int i=0;i<8;i++){
    //     if(s[i]='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
    //         if((val[i]=='A'||val[i]=='E'||val[i]=='I'||val[i]=='O'||val[i]=='U')){}
    //         else{
    //         res=true;
    //         break;
    //         }
    //     }
    //     else{
    //         if(val[i]!='A'||val[i]!='E'||val[i]!='I'||val[i]=='O'||val[i]!='U')
    //     res=true;
    //     }
    //     // mp.push_back(i);?
    // }
    // // sort(mp.begin(),mp.end());
    // // if(mp[0]==1&&mp[1]==3&&mp[2]==5&&mp.size()==3)
    // if(res)
    // no;
    // else
    // yes;
    // for(int i=0;i<8;i++){
    //     if(i!=1&&i!=3&&i!=5){
    //         if(s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U')
    //         res++;
    //     }
    // }
    // if((s[1]=='A'||s[1]=='E'||s[1]=='I'||s[1]=='O'||s[1]=='U')&&(s[3]=='A'||s[3]=='E'||s[3]=='I'||s[3]=='O'||s[3]=='U')&&(s[5]=='A'||s[5]=='E'||s[5]=='I'||s[5]=='O'||s[5]=='U')&&res==5)
    // yes;
    // else
    // no;
    for(int i=0;i<8;i++){
        if((!chk(val[i])&&chk(s[i]))||(chk(val[i])&&!chk(s[i]))){
            no;
            return;
        }
    }
    yes;
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