#include<iostream>
using namespace std;

int main(){
    string A, B;
    cin >> A,
    cin >> B;


    if(A<B){
        cout << "LA PRIMERA";
    }
    else if(A>B){
        cout << "LA SEGUNDA";
    }
    else{
        cout << "IGUALES";
    }
}