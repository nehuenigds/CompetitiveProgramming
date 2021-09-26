#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int cant_div(int x){
    int sq = sqrt(x);
    int cant = 0;
    for(int i=1; i<sq;i++)
        if(x%i==0)cant+=2;
    if (sq*sq==x)cant++;
    else if(x%sq==0)cant+=2;
    return cant;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto i:v)cin >> i;
    for (auto i:v)cout << cant_div(i)<< endl;
}