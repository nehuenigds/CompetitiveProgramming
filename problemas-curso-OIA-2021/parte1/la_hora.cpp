using namespace std;

#include<iostream>

int main(){
    string hora="00:00";
    int horas;

    cin>>hora;

    horas=10*(hora[0]-'0')+hora[1]-'0';

    if(horas==0)cout<<12<<hora[2]<<hora[3]<<hora[4]<<" AM";



    else if(horas>12){
        horas-=12;
        if(horas<10)cout<<"0";
        cout<<horas<<hora[2]<<hora[3]<<hora[4]<<" PM";
    }
    else if (horas==12)cout<<hora<<" PM";
    
    else cout<<hora<<" AM";


}