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
    string s,res="";
    cin>>s;
    int n=s.size(),r=0,l=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='b')
        r++;
        else if(s[i]=='B')
        l++;
        else{
            if(s[i]>='a'&&r!=0)
            r--;
            else if(s[i]<'a'&&l!=0)
            l--;
            else
            res+=s[i];
        }
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
} 
    // int n=s.size();
    // vector<string> a;
    // vector<char> b,big;
    // for(char it:s){
    //     if(it<=122&&it>=97)
    //     b.push_back(it);
    //     else
    //     big.push_back(it);
    // }
    // big=s;
    // a=s;
    // int c=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='B'&&big.empty()){
    //         a[big.back()]='#';
    //         big.pop_back();
    //     }
    //     else if(s[i]=='b'&&!b.empty()){
    //         a[b.back()]='#';
    //         b.pop_back();
    //     }
    //     else if(s[i]!='b' && s[i]!='B'){
    //         if(s[i]>='a'&&s[i]<='z')
    //         b.push_back(c);
    //         else
    //         big.push_back(c);
    //         a.push_back(s[i]);
    //         c++;
    //     }
    // }
    // string res="";
    // for(char it:a){
    //     if(it!='#')
    //     res+=it;
    // }
    // cout<<res<<endl;
signed main()
{
    MoHiT;

    int t;
    cin >> t;
    while (t--)
        prg();
    return 0;
}