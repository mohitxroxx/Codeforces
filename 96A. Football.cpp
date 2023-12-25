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
    string s;
    cin>>s;
    if(s.find("0000000")!=-1||s.find("1111111")!=-1)
    yes;
    else
    no;
}
signed main()
{
    cp;
    int t=1;
    // cin >> t;
    while (t--)
        prg();
    return 0;
}