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
// #define endl "\n"
 
using namespace std;
 
void prg()
{
    string s;
    cin>>s;
    char ch=s[0];
    char v=s[1];
    int x=(int)v-'0';
    // cout<<x<<endl;
    for(int i=1;i<=8;i++){
        if(i!=x)
        cout<<ch<<i<<endl;
    }
    char cha='a';
    for(char i=cha;i<='h';i++){
        if(i!=ch){
        cout<<i<<v<<endl;
        }
        // cha++;
    }
    // vector<string> v;
    // for(int i=0;i<8;i++)
    // v.push_back()
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