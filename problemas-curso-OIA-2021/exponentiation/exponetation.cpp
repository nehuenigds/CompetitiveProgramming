//https://cses.fi/problemset/task/1095/

#include<iostream>
#include <vector>

using namespace std;


int binpow(long long base, long long pow) {
    int mod =1e9+7;
    pow%=mod;
    long long res=1;
    while(pow > 0) {
        if (pow & 1)
            res = res * base % mod;
        base = base * base%mod;
        pow >>=1;
    }
    return res;}

int main(){
    long long n, b,c;
    long long a;
    cin>>n;
    vector<pair<long long,long long>> lista;
    for(int i=0;i<n;i++){
        cin>>c>>b;
        lista.push_back({c,b});
    }
    for(auto au:lista){
        a=binpow(au.first, au.second);
        cout << a <<endl;
        }    
    }
