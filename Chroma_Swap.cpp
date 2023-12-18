#include <bits/stdc++.h>
#define fi0 for (int i = 0; i < n; i++)
#define fj1 for (int j = 1; j < n; j++)
#define fi1 for (int i = 1; i <= n; i++)
#define fit for(auto it:ar)
#define fmp for(auto it:mp)
#define int long long int
#define nl << "\n"
#define MoHiT                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define umap unordered_map
#define pb push_back
#define fv for (int i = 0; i < v.size(); i++)
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define inarr for(int i=0;i<n;i++) cin>>ar[i]
#define popcount __builtin_popcount
 
using namespace std;
 
void prg()
{
    int n;
    cin>>n;
    vector<int> a(n),ca(n),b(n),cb(n);
    fi0{
        int x;
        cin>>x;
        a[i]=x;
        }
    fi0{
        int x;
        cin>>x;
        ca[i]=x;
        }
    fi0{
        int x;
        cin>>x;
        b[i]=x;
        }
    fi0{
        int x;
        cin>>x;
        cb[i]=x;
        }
    for(int i=0;i<n;i++){
        vector<int> temp=a;
        sort(temp.begin(),temp.end());
        if(a==temp){
           yes;
           return; 
        }
        if(ca[i]==cb[i]&&a[i]>b[i])
        a[i]=b[i];
    }
    no;
}
signed main()
{
    MoHiT;

    int t;
    cin >> t;
    while (t--)
        prg();
    return 0;
}