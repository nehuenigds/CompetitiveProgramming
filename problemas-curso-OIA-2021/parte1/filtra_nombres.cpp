//problama: http://juez.oia.unsam.edu.ar/#/task/filtra_nombres/statement

#include<iostream>
#include<vector>

using  namespace std;

int main(){
    int N;
    vector <string> lista;

    cin >> N;

    //ingreso N strings
    for(int i=0; i<N; i++){
        string a;
        cin >> a;
        int t;
        t=a.size();
        //paso todo a minuscula
        for (int k = 0; k < t; k++)
        {
            if(a[k]<'a'){
                a[k] = a[k]+32;
            }
        }
        //agrego a la lista si conicde la pimera letra con la ultima
        if(a[0]==a[t-1]){
            lista.push_back(a);    
        }
    }

    //imprimo la lista filtrada    
    for(int j=0; j<lista.size(); j++)cout << lista[j] <<endl;

    return 0;
}