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
 
using namespace std;
 
void prg()
{
    string s;
    cin>>s;
    string res="";
    transform(s.begin(), s.end(), s.begin(),::tolower);
    for(char it:s){
        if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'||it=='y')
        //ye Y kab se vowel ho gyaaaaaaaaaaaaaa
        continue;
        else{
            //res+=("."+it);
            res+=".";
            res+=it;
        }
    }
    cout<<res<<endl;
}
signed main()
{
    cp;
    int t=1;
    ///cin >> t;
    while (t--)
        prg();
    return 0;
}