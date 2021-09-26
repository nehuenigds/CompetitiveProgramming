#include<iostream>
using namespace std;

int main(){

    int largo;
    int suma=0;
    int max=0;
    int min=1000;

    cin >> largo;

    char lista[largo];

    for(int i=0; i<largo; i++){
        
        int a=0;
        cin >> a;
        lista[i]=a;
        
        suma +=a;
        if(max<a){
            max=a;
        }
        if (min>a)
        {
            min=a;
        }
    }

    cout << max<< endl;
    cout << min << endl;
    cout << suma << endl;
}