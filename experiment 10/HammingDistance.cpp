#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& nums) {
    int res=0;
    for(int i=0;i<32;i++)
    {
        int c=0;
        for(int j=0;j<nums.size();j++)
        {
            if((1<<i)&nums[j]) c++;
        }
        res+=(nums.size()-c)*c;
    }
    return res;
    
}


int main(){
    int n;cin>>n;
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    // string c;cin>>c;
    //  int cc;cin>>cc;
    cout<<"output : "<<f(c);
}