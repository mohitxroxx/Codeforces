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
    int ar[n];
    fi0
    cin>>ar[i];
    int res=0,pos=1;
    fi0{
        res+=(pos-ar[i]+n)%n;
        pos=ar[i];
    }
    cout<<pos<<endl;
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