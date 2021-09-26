using namespace std;
#include<iostream>

int main(){


    int hora;

    cin >> hora; //insetar hora


    if(hora>24){
        printf("no es una hora valida");
    }
    else if(0<hora && hora<12){
        printf("buenos dias");
    }
    else if(12<hora && hora<18){
        printf("buenas tardes");
    }
    else if(18<hora && hora<24){
        printf("buenas noches");
    }
}