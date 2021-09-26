#include<iostream>

using namespace std;

int main()
{
    int N, resultado=0;
    cin >> N;

    for(int a=1; N>=a; a++){
        if(a%2 == 0){
            resultado += a;    
        }
        else{
            resultado -= a;
        }
    }
    cout << resultado;
    return 0;
}