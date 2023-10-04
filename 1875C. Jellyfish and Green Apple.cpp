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
#define vector vector<int>
#define fv for (int i = 0; i < v.size(); i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
 
using namespace std;
 
void prg()
{
    int n,m;
    cin>>n>>m;
    int xyz=m/n;
    int lol=xyz*n;
    m=m-lol;
    if(m){
        int q=__gcd(n,m);
        n/=q;
        m/=q;
        bool flag=false;
        if(__builtin_popcountll(n)!=1)
        flag=true;
        if(flag){
        cout<<-1<<endl;
        return;
        }
        vector qt;
        bitset<64> bits(m);
        int res=0;
        for(int i=0;i<64;i++){
            if(bits[i])
            qt.push_back(pow(2,i));
        }
        for(auto it:qt)
        res+=(n/it-1)*it;
        cout<<res*q<<endl;
    }
    else
    cout<<0<<endl;
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