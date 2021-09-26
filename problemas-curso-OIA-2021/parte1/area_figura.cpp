#include<iostream>
using namespace std;

int main(){
    int area;
    int d1, d2, d3;
    int resultado=0;
    string figura;

    cin >> figura;

    switch (figura[2])
    {
    case 'a':
        cin >> d1;  
        resultado = d1*d1;
        break;
    case 'c':
        cin >> d1;
        cin >> d2;
        resultado = d1*d2;
        break;
    case 'b':
        cin >> d1;
        resultado = 6*d1*d1;
        break;
    case 'j':
        cin >> d1;
        cin >> d2;
        cin >> d3;
        resultado = 2*(d1*d2+d1*d3+d2*d3);
        break;
    }
    cout << resultado;
    return 0;
}