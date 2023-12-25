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
    int n;
    cin>>n;
    string ar[n];
    fi0
    cin>>ar[i];
    int res=0;
    for(string it:ar){
        if(it=="X++"||it=="++X")
        res++;
        else
        res--;
    }
    cout<<res<<endl;
}
signed main()
{
    cp;
    int t=1;
    //cin >> t;
    while (t--)
        prg();
    return 0;
}