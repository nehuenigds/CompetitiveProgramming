#include <iostream>
using namespace std;

int main(){

    string palabra;
    string nueva_palabra;

    cin >> palabra;

    int tamano = palabra.size();
    
    for(int i=1; i<=tamano; i++)
    {
        nueva_palabra += palabra[tamano-i];
    }
    cout << nueva_palabra << endl;

    return 0;
}