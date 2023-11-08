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
#define umap unordered_map
#define pb push_back
#define fv for (int i = 0; i < v.size(); i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define inarr for(int i=0;i<n;i++) cin>>ar[i]
 
using namespace std;
 
void prg()
{
    int n;
    cin>>n;
    int ar[n];
    inarr;
    int i=0,j=n-1;
    int s1=0,s2=0,x=1;
    while(i<=j){
        if(x%2==1){
            if(ar[i]<ar[j]){
            s1+=ar[j];
            j--;
            }
            else{
            s1+=ar[i];
            i++;
            }
        }
        else if(x%2==0){
            if(ar[i]<ar[j]){
            s2+=ar[j];
            j--;
            }
            else{
            s2+=ar[i];
            i++;
            }
        }
        x++;
    }
    cout<<s1<<" "<<s2<<endl;
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