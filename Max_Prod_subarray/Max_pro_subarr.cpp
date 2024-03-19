// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
   long long f(vector<long long>& nums) {
        long long n = nums.size();
        long long cmps = nums[0];
        long long cmi = nums[0];
        long long mp = nums[0];
        for (int i = 1; i < n; i++) {
            int temp = cmps;
            cmps = max({nums[i], cmps * nums[i], cmi * nums[i]});
            
            cmi = min({nums[i], temp * nums[i], cmi * nums[i]});
            mp = (max(mp, cmps))%mod;
        }
        return mp;
    }

int main() {
    // Write C++ code here
    int n;cin>>n;
    vector<long long >v;
    for(int i=0;i<n;i++){
        long long x;cin>>x;
        v.push_back(x);
    }
    cout<<f(v)<<endl;
    return 0;
}