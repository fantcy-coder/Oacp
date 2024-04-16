#include <bits/stdc++.h>
using namespace std;

int f(vector<vector<int>>matrix, int n) {
        
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int commonBlackSquares = 0;
            for (int col = 0; col < n; ++col) {
                if (matrix[i][col] == 1 && matrix[j][col] == 1) {
                    commonBlackSquares++;
                }
            }
            count += ((commonBlackSquares-1)*commonBlackSquares)/2;
        }
    }
    return count;

}


int main(){
    int n;cin>>n;
    vector<vector<int>>c (n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>c[i][j];
    }
    // string c;cin>>c;
    //  int cc;cin>>cc;
    cout<<"output : "<<f(c,n);
}