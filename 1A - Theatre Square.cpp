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
 
using namespace std;
 
void prg()
{
    int n,m,a;
    cin>>n>>m>>a;
    int x,y=m/a;
    x=n/a;
    if(n%a>0)
    x++;
    if(m%a>0)
    y++;
    cout<<x*y<<endl;
}
signed main()
{
    cp;
    int t=1;
    ///cin >> t;
    while (t--)
        prg();
    return 0;
}