// #include <bits/stdc++.h>
// #define fi0 for (int i = 0; i < n; i++)
// #define fj1 for (int j = 1; j < n; j++)
// #define fi1 for (int i = 1; i <= n; i++)
// #define fit for(auto it:ar)
// #define fmp for(auto it:mp)
// #define int long long int
// #define nl << "\n"
// #define MoHiT                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define umap unordered_map
// #define pb push_back
// #define fv for (int i = 0; i < v.size(); i++)
// #define yes cout<<"Yes"<<endl
// #define no cout<<"No"<<endl
// #define inarr for(int i=0;i<n;i++) cin>>ar[i]
// #define popcount __builtin_popcount
 
// using namespace std;
 
// void prg()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     vector<int> e;
//     vector<int> o;
//     for(int i=0;i<n;i++){
//         cin>>ar[i];
//         if(ar[i]%2==1)
//         o.push_back(ar[i]);
//         else
//         e.push_back(ar[i]);
//     }
//     if(o.size()%2==1){
//         cout<<-1<<endl;
//         return;
//     }
//     sort(o.begin(),o.end());
//     sort(e.begin(),e.end());
//     vector<int> res;
//     for(int i=0;i<e.size()/2;i++){
//         res.push_back((e[i]+e[e.size()-1-i])/2);
//         res.push_back((abs(e[i]-e[e.size()-1-i]))/2);
//     }
//     for(int i=0;i<o.size()/2;i++){
//         res.push_back((o[i]+o[o.size()-1-i])/2);
//         res.push_back((abs(o[i]-o[o.size()-1-i]))/2);
//     }
//     for(int i:res)
//     cout<<i<<" ";
//     cout<<endl;
// }
// signed main()
// {
//     MoHiT;

//     int t;
//     cin >> t;
//     while (t--)
//         prg();
//     return 0;
// }


#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> eve;
        vector<int> odd;
        vector<int> ans;
        vector<int> v;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 != 0)
            {
                odd.push_back(x);
                a++;
            }
            else
            {
                eve.push_back(x);
            }
        }
        if (a % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        else{
        sort(eve.begin(), eve.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());
        int m = eve.size();
        int p=0;
        q=m-1;
        while(p<q){
            
        }
        if (m > n - m)
        {
            for (int i = 0; i < n - m; i++)
            {
                v.push_back(odd[i]);
                v.push_back(eve[i]);
            }
            for (int i = n - m; i < m; i++)
            {
                v.push_back(eve[i]);
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                v.push_back(odd[i]);
                v.push_back(eve[i]);
            }
            for (int i = m; i < n - m; i++)
            {
                v.push_back(odd[i]);
            }
        }

        for (int i = 0; i < n / 2; i++)
        {
            int x = (v[i] + v[i + n / 2]) / 2;
            ans.push_back(x);
            x = abs((v[i] - v[i + n / 2]) / 2);
            ans.push_back(x);
        }
        }

        // Rearrange the output array
        for (int i = 0; i < n; i += 2)
        {
            cout << ans[i] << " ";
        }
        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}