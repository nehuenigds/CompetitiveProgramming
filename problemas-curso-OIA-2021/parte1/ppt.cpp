#include<iostream>

using namespace std;

int main(){
    string Ana;
    string Bartolo;
    const string PA="Papel";
    const string PI="Piedra";
    const string TI="Tijera";
    string resultado;
    
    cin>>Ana>>Bartolo;

    if(Ana==Bartolo)cout<<"Empate";
    else if(Ana==PA){
        if(Bartolo==PI)cout<<"Ana";
        else if(Bartolo==TI)cout<<"Bartolo";
    }
    else if(Ana==PI){
        if(Bartolo==TI)cout<<"Ana";
        else if(Bartolo==PA)cout<<"Bartolo";
    }
    else if(Ana==TI){
        if(Bartolo==PA)cout<<"Ana";
        else if(Bartolo==PI)cout<<"Bartolo";
    }
    return 0;
}