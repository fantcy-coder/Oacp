#include <bits/stdc++.h>
using namespace std;

string f(string num, int k) {
    vector<char> vector;

    for(int i = 0; i < num.length(); i++)
    {
        while(!vector.empty() && k > 0 && vector.back() > num[i])
        {
            vector.pop_back();
            k--;
        }
        vector.push_back(num[i]);
    }

    
    while(k > 0)
    {
        vector.pop_back();
        k--;
    }

    
    string ans = "";
    for(int i = 0; i < vector.size(); i++)
    {
        if(vector[i] == '0' && ans == "") continue;
        ans += vector[i];
    }

    if(ans == "") return "0";
    return ans;
}

int main(){
    // int n;cin>>n;
    // vector<int>c(n);
    // for(int i=0;i<n;i++){
    //     cin>>c[i];
    // }
    string c;cin>>c;
     int cc;cin>>cc;
    cout<<"output : "<<f(c,cc);
}