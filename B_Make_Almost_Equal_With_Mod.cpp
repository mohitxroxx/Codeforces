#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = i+1; j < n-1; j++)
#define fi1 for (int i = i+1; i < n-1; i++)
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

int ncr(int n,int r){
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}

bool isVowel(char s){
    if(s=='A' || s=='E' || s=='I' || s=='O' || s=='U'||s=='a' || s=='e' || s=='i' || s=='o' || s=='u'  ){
        return true;
    }
    return false;
}


void prg()
{
    int n;
    cin>>n;
    int ar[n];
    int odd=0,even=0;
    fi0{
        cin>>ar[i];
        if(ar[i]%2==0)
        even++;
        else
        odd++;
    }
    if(odd && even){
        cout<<2<<endl;
        return;
    }
    // map<int,int> mp;
    // fi0{
    //     fj1{
    //         mp[__gcd(ar[i],ar[j])]++;
    //     }
    // }
    // for(auto it:mp)
    // cout<<it.second<<" ";
    // cout<<endl;
    // int d=res%10;
    // int chk=0;
    // while(!d){
    //     chk++;
    //     res=res/10;
    //     d=res%10;
    // }
    int res=1;
    while(res<=1e18){
        unordered_set<int> s;
        for(auto it:ar){
            s.insert(it%res);
        }
            if(s.size()==2){
            cout<<res<<endl;
            return;
            }
        res*=2;
        }
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