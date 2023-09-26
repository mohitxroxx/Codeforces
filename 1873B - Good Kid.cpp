#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
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
    int ar[n];
    fi0
    cin>>ar[i];
    vector p;
    for(int i=0;i<n;i++){
        int pr=ar[i]+1;
        for(int j=0;j<n;j++){
            if(i==j)
            continue;
            else{
                pr=pr*ar[j];
            }
        }
        p.push_back(pr);
    }
    sort(p.begin(),p.end(),greater<int>());
    cout<<p[0]<<endl;
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