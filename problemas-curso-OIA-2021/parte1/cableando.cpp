using namespace std;

#include<iostream>

int main(){
    int N=0,c=0,mayor=0,men=0;

    cin>>N>>c;
    mayor=c;
    men=c;

    for (int i = 0; i < N; i++){
        cin>>c;
        if(mayor<c)mayor=c;
        if(men>c)men=c;
    }
    cout<<mayor-men;
}