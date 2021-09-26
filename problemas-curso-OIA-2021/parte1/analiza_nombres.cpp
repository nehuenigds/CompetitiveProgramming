using namespace std;

#include<iostream>
#include<vector>

int main(){

    int n;
    string a;
    string Mas_largo="a";
    int Mas_rep=0;
    vector <string> lista;
    
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(Mas_largo.size()<a.size())Mas_largo=a;
        lista.push_back(a);
    }
    vector <int> rep_lista(lista.size(), 0);
    for (int i = 0; i < lista.size(); i++)
    {
        for (int j = 0; j < lista.size(); j++)
        {
            if(i!=j)rep_lista[i]+=(lista[i]==lista[j]);
        }   
    }
    for (int i = 0; i < rep_lista.size(); i++)
    {
        if(rep_lista[Mas_rep]<rep_lista[i])Mas_rep=i;
    }
    
    
    cout<<Mas_largo<<endl;
    cout<<lista[Mas_rep]<<endl;
}