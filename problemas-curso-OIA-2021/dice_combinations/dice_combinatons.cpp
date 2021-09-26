#include <bits/stdc++.h>
//https://cses.fi/problemset/task/1633
using namespace std;

const int Max=(int)1e6+10;
const int mod=(int)1e9+7;
int n;
vector<int> dp(Max,0);

int main(){
    cin >> n;
    dp[0]=1;
    for(int i=0; i<Max-6;i++){
        for (int j=1;j<=6;j++){
            dp[i+j]=(dp[i+j]+dp[i])%mod;
        }
    }
    cout << dp[n]<< endl;
    return 0;
}