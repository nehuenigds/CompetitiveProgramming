#include<iostream>
using namespace std;

int main(){
    string palabra;
    int l;
    cin >> palabra;

    l = int(palabra.size());

    for(int i=1; i<=(l+2); i++){cout << '*';}
    cout << "" << endl;
    cout << '*' << palabra << '*' << endl;
    for(int i=1; i<=(l+2); i++){cout << '*';}
}