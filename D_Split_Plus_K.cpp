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
#define inarr for(int i=0;i<n;i++) cin>>a[i]
#define popcount __builtin_popcount
#define endl "\n"
 
using namespace std;

int ncr(int n,int r){
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}

bool isVowel(char s){
    if(s=='A' || s=='E' || s=='I' || s=='O' || s=='U'||s=='a' || s=='e' || s=='i' || s=='o' || s=='u'  ){
        return true;
    }
    return false;
}


void prg()
{
    int n, k;
        cin >> n >> k;
        vector<int> a(n);
        inarr;
        int sum=0;
        fi0{
            a[i]-=k;
            sum+=a[i];
        }
        // fi0{
        //     sum+=a[i];
        // }
        sort(a.begin(),a.end());
        if (sum == 0 && a[0] == 0) 
            cout << 0 << endl;
        else if ((sum == 0)||(sum > 0 && a[0] <= 0)||(sum < 0 && a[0] >= 0))
            cout << -1 << endl;
        // else if
        //     cout << -1 << endl;
        // else if
        //     cout << -1 << endl;
        else {
            int res = 0;
            for (auto it : a)
            res= __gcd(res, it);
            cout <<abs(sum / res) - n <<endl;
        }
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