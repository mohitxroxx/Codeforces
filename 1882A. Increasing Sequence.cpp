#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
#define map unordered_map<int,int> 
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
#define get cin>>ar[i]
#define show cout<<ar[i]
 
using namespace std;
 
void prg()
{
    int n;
    cin>>n;
    int ar[n];
    fi0
    get;
    int c=1;
    fit{
        if(it==c)
        c+=2;
        else
        c++;
    }
    cout<<c-1<<endl;
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