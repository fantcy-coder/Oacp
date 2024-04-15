#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& costs, int coins) {
        
    priority_queue<int,vector<int>,greater<int>>pq;

    for(auto i:costs) pq.push(i);
        int count=0;

    while(!pq.empty())
    {
            
        int top=pq.top();
        pq.pop();
        if(top>coins)return count;
        count++;
        coins-=top;

    }
    return count;
}
int main(){
    int n;cin>>n;
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int cc;cin>>cc;
    cout<<"output : "<<f(c,cc);
}