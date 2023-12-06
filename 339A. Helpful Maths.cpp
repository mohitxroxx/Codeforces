#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
#define fit for(auto it:s)
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
   string s;
   cin>>s;
   vector v;
   fit{
    if(isdigit(it)){
    int x=(int)it-48;
    v.push_back(x);
    }
   }
   sort(v.begin(),v.end());
   string res="";
   int n=v.size();
   if(n==1)
   cout<<v[0]<<endl;
   else
   {
    for(int i=0;i<n;i++){
        string x=to_string(v[i]);
        res+=x;
        if(i!=n-1)
        res+="+";
    }
   cout<<res<<endl;
   }
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