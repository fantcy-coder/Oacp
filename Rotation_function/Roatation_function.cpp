// Online C++ compiler to run C++ program online
    #include <bits/stdc++.h>
    using namespace std;
    long long mod=1e9+7;
    int f(vector<long long >& nums) {
        int sum = 0, n = nums.size();
        int prev=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(i<n-1)prev+=(i+1)*nums[i];
        }
        int ans = prev;
        for(int i = n-2; i>=0; i--){
            int cur = prev + sum - n*nums[i];
            prev = cur;
            ans = max(ans,prev);
        }
        return ans;
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