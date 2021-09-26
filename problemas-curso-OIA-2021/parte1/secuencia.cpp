using namespace std;
#include<iostream>
#include<vector>

int main(){
    int N;
    int cant;
    vector <int> lista;
    cin >> N;
    int a;
    
    for (int i = 1; i <= N; i++)
    {
        cin >> a;
        lista.push_back(a);
    }
    
    for(int i=1; i<=10; i++)
    {
        cant=0;
        for(int j=0; j<N; j++){
            if(lista[j]==i)
            cant++;           
        }
        cout << cant << endl;
    }
}