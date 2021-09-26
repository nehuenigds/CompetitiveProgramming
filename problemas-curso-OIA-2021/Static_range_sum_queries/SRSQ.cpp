//https://cses.fi/problemset/task/1646
#include<bits/stdc++.h>
using namespace std;
const int MAXN=(int)2e5+10;
long long n, q, A[MAXN];

int main(){
    cin >> n>>q ;
    vector<long long> res(q,0);
    for(int i=0;i<n;i++)cin >> A[i];

    for(int i=1;i<n;i++){
            A[i]=A[i]+A[i-1];
    }

    for (int i=0; i<q;i++){
        int a,b;
        cin >> a >> b;
        res[i]=A[b-1]-A[a-2];
    }
    for (auto i:res)cout << i<< endl;
} 