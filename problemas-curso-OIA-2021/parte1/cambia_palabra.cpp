#include<iostream>
using namespace std;

int main(){

    string hola;
    int n;

    cin >> hola;
    cin >> n;
    hola[n-1] = 'X';

    cout << hola;

    return 0;
}