#include <bits/stdc++.h>
using namespace std;

long long int f(vector<int>& nums, int n1) {
    long long int n=n1;
    long long int ans=0;
    long long int sum=0;
    for(int i=0;i<nums.size();i++){
        if(sum>=n) break;
        if(sum+1==nums[i]){
            sum+=nums[i];
        }else if(sum+1<nums[i]){
            ans+=1;
            //cout<<sum+1<<endl;
            sum+=(sum+1);
            i-=1;
        }
        else{
            sum+=nums[i];
            //ans+=1;
        }
    }

    while(sum<n){
        sum+=(sum+1);
        ans+=1;
    }

    return ans;

}


int main(){
    int n;cin>>n;
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    // string c;cin>>c;
     int cc;cin>>cc;
    cout<<"output : "<<f(c,cc);
}