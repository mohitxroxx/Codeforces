#include <bits/stdc++.h>

#define MoHiT      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inarr      vector<int> ar(n); for(int i=0;i<n;i++) cin>>ar[i]
#define fi0        for (int i = 0; i < n; i++)
#define fj0        for (int j = 0; j < n; j++)
#define fi1        for (int i = 1; i <= n; i++)
#define fj1        for (int j = 1; j <= n; j++)
#define fv         for (int i = 0; i < v.size(); i++)
#define rall(v)    v.rbegin(),v.rend()
#define all(v)     v.begin(),v.end()
#define popcount   __builtin_popcount
#define yes        cout<<"YES"<<endl
#define no         cout<<"NO"<<endl
#define fit        for(auto it:ar)
#define fmp        for(auto it:mp)
#define int        long long int
#define uma        unordered_map
#define mod        1000000007
#define pb         push_back
#define endl       "\n"
 
using namespace std;

//predefined functions

int ncr(int n,int r){
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}

int lcm(int a, int b){
    return (a*b)/__gcd(a,b);
}

bool isVowel(char s){
    if(s=='A' || s=='E' || s=='I' || s=='O' || s=='U'||s=='a' || s=='e' || s=='i' || s=='o' || s=='u'  )
        return true;
    return false;
}

bool isPalindrome(string s) {
    int n = s.length();
    for(int i = 0; i < n/2; i++) {
        if(s.at(i) != s.at(n-i-1))
            return false;
    }
    return true;
}

bool isPrime(int n) {
    for(int i = 2; i < (int)sqrt(n)+1; i++) {
        if(n%i==0)
            return false;
    }
    return true;
}

int fact(int n){
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}


//logic starts here

void prg(){
    int n,k;
    cin>>n>>k;
    inarr;
    vector<int> v1,v2;
    v1=ar;
    v2=ar;
    sort(all(v1));
    // sort(rall(v2));
    if(v1==ar)
    yes;
    else{
        if(k==1)
        no;
        else
        yes;
    }
}


signed main(){

    MoHiT;

    int t;
    cin >> t;
    while (t--)
        prg();
    return 0;
}