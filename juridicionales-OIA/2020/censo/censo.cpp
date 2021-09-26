#include<bits/stdc++.h>

using namespace std;

int decada(int fecha){
    int n=fecha%100;
    return n;
}

bool esMayor(int edad){
    if(edad<18) return false;
    else return true;
}

string nombrecompleto(string nombre, string apellido){
    return string(nombre + " " + apellido);
}

int sonmayores(vector<int> edades){
    int n=0;
    for (auto a : edades){
        if(a>17) n++;
    }
    return n;
}

int main(){
    vector<int> edades={2, 12, 144, 120, 53};
    cout<<sonmayores(edades);
    return 0;
} 