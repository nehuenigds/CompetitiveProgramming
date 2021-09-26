#include "procesapalabra.cpp"

#include <string>
#include <iostream>

using namespace std;

string procesaPalabra(string palabra);

int main()
{
    string palabra;
    getline(cin, palabra);
    string resultado = procesaPalabra(palabra);
    cout << resultado << endl;
    return 0;
}
