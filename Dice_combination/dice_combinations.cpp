// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// ll dp[1000005];
// ll f(ll l,vector<ll>&v){
//     if(l==0)return 1;
//     if(dp[l]!=-1) return dp[l];
//     ll ans=0,n=6;
//     while(n--){
//         if((l-v[6-n])<0) continue;
//         ans=(ans%1000000007+f(l-v[6-n],v)%1000000007)%1000000007;
//     }
//     return dp[l]=ans;
// }

// int main()
// {
//     memset(dp,-1,sizeof(dp));
//     vector<ll>v;
//     int n=6;
//     while(n--) v.push_back(7-n);
//     ll t;
//     cin>>t;
//     cout<<((f(t,v))%1000000007)<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1000005];
ll f(ll l,vector<ll>&v){
    
    if(l==0)return 1;
    if(dp[l]!=-1) return dp[l];
    ll ans=0,n=6;
    while(n--){
        if(l-v[5-n]<0) continue;
        ans=(ans%1000000007+f(l-v[5-n],v)%1000000007)%1000000007;
    }
    return dp[l]=ans;
}


int main()
{
    memset(dp,-1,sizeof(dp));
    vector<ll>v;
    int n=7;
    while(n--) {v.push_back(7-n);}
    ll t;
    cin >>t;
    cout<<((f(t,v))%1000000007);
    return 0;
}