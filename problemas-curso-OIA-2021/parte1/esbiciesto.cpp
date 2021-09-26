using namespace std;
#include<iostream>

int main(){
    int a;
    cin >> a;
    
    if(a%100==0){
        if(a%400==0)cout<<"SI";
        else cout<<"NO";
    }
    else if(a%4==0)cout<<"SI";
    else cout<<"NO";
}