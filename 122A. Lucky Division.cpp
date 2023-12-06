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
   int n;
   cin>>n;
   bool ans=false;
    for(int i=4;i<=n;i++){
        if(n%i==0){
            int temp=i;
            int c=0;int x=0;
            while(temp!=0){
                int digit=temp%10;
                if(digit==4 || digit==7)
                c++;
                temp/=10;
                x++;
            }
            if(c==x){
            ans=true;
            break;
            }
        }
    }
    if(ans)
    yes;
    else
    no;
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