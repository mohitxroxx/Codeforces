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

        int a,b,Q1,Y1,Q2,Y2;
        cin>>a>>b>>Q1>>Q2>>Y1>>Y2;
 
        set<pair<int,int>> s1,s2;
 
        s1.insert({Q1-a, Q2-b});
        s1.insert({Q1+a, Q2-b});
        s1.insert({Q1-a, Q2+b});
        s1.insert({Q1+a, Q2+b});
        s1.insert({Q1-b, Q2-a});
        s1.insert({Q1+b, Q2-a});
        s1.insert({Q1-b, Q2+a});
        s1.insert({Q1+b, Q2+a});
 
        s2.insert({Y1-a, Y2-b});
        s2.insert({Y1+a, Y2-b});
        s2.insert({Y1-a, Y2+b});
        s2.insert({Y1+a, Y2+b});
        s2.insert({Y1-b, Y2-a});
        s2.insert({Y1+b, Y2-a});
        s2.insert({Y1-b, Y2+a});
        s2.insert({Y1+b, Y2+a});
 
        int res=0;
        for(auto it: s1)
            if(s2.find(it)!=s2.end())
                res++;
 
        cout<<res<<endl;

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