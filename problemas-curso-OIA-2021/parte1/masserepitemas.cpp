//enunciado: http://juez.oia.unsam.edu.ar/#/task/mas_aparece/statement
#include<iostream>
#include<vector>

using namespace std;


int main(){
    
    int a=0;
    int N=0;
    int may=0;
    vector <int> v;
    cin>>N;

    for (int i = 0; i < N; i++) //creal lista
    {
        cin >> a;
        v.push_back(a);
        if(may<a)may=a;
    }

    vector <int> repeticiones(may+1, 0);//crear lista con las repeticiones
                                      //(el valor de la poscicion i corresponde,
                                      // a la cantidad de veces que se repite i)

    for (int j = 0; j < v.size(); j++)//incremeto en uno por cada numero, donde correponda.
    {
        repeticiones[v[j]]++;
    }
    
    int pos=1;
    for (int l = 0; l < repeticiones.size(); l++)//buscamos el que mas se repite
    {
        if(repeticiones[l]>repeticiones[pos])pos=l;
    }

    cout<<pos<<" "<<repeticiones[pos];    
}