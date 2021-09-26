#include<iostream>

using namespace std;

int main(){
    int long long n, a, b, j=0;
    cin >> n;
    cin >> a;
    for (int i = 0; i < n-1; i++){
        cin >> b;
        if(b<a)j+=a-b, b=a;
        a=b;
    }
    cout << j;
    return 0;}
