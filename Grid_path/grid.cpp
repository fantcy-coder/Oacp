#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ll n,m,x,i,j,k,q;
    cin >> n;
    bool grid[n+1][n+1];
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                char ch;
                cin >> ch;
                if(ch != '.')grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
 
        int dp[n+1][n+1];
        for(int i = n; i >= 1; i--)
        {
            for(int j = n; j >= 1; j--)
            {
                if(i == n && j == n) dp[i][j] = 1;
                else
                {
                    int op1, op2;
                    if(j==n)op1=0;
                    else op1=dp[i][j+1];
                    if(i==n)op2=0;
                    else op2=dp[i+1][j];
                    dp[i][j] = (op1 + op2) % 1000000007;
                    if(grid[i][j]!=0)
                        dp[i][j] = 0;
                }
            }
        }
        if(grid[n][n])
            cout << 0;
        else cout << dp[1][1];
   
   return 0;
}