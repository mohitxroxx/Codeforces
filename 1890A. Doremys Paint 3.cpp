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
    cin>>n;;
    vector<int> ar;
    fi0{
        int x;
        cin>>x;
        ar.push_back(x);
    }
    map<int,int> mp;
    for(int i:ar)
    mp[i]++;
    vector<int> temp;
    for(auto i:mp){
        temp.push_back(i.second);
    }
    // sort(ar.begin(),ar.end());
    if((abs(temp[0]-temp[1])>=2||mp.size()>=3)&&mp.size()!=1)
    // do{
    //     temp=ar;
    //     if(chk(temp)){
    //         res=true;
    //         break;
    //     }
    // }
    // while(next_permutation(ar.begin(),ar.end()));
    no;
    else
    yes;
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
