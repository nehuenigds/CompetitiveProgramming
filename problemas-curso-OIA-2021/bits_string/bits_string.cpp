#include<iostream>

using namespace std;


int main(){
    int n, a=1;

    cin >> n;

    for(int i=0; i<n; i++){
        a*=2;
        a%=1000000007;
    }
    cout << a;
}