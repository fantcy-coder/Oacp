#include <bits/stdc++.h>
using namespace std;

string f(vector<int>& nums) {
    if(count(begin(nums), end(nums), 0)==nums.size()) return "0";
    sort(begin(nums), end(nums), [](int a, int b){
        string at = to_string(a);
        string bt = to_string(b);
        return at+bt>=bt+at;
    });
    string res = "";
    for(auto it : nums){
        res+=to_string(it);
    }
    return res;
}
int main(){
    int n;cin>>n;
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    // int cc;cin>>cc;
    cout<<"output : "<<f(c);
}