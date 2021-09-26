//https://cses.fi/problemset/task/1638
#include <bits/stdc++.h>
using namespace std;
const int mod=(int)1e9+7;
const int MAXN=(int)1e3;
int n, dp[MAXN+10][MAXN+10];
string v[MAXN];
    cin >> n;
    for(int i=0; i<n;i++) cin>>v[i];
    dp[n-1][n-1]=(v[n-1][n-1]!='*');
    for(int i=n-1; i>=0;i--){
        for (int j=n-1; j>=0;j--){
            if(i==n-1&&j==n-1)continue;
            if(v[i][j]!='*')
                dp[i][j]=(dp[i+1][j]+dp[i][j+1])%mod;
        }
int main(){
    }
    cout <<dp[0][0]<<endl;
    return 0;
}
