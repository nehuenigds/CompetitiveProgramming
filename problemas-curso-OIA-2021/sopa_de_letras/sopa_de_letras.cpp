//problema: http://juez.oia.unsam.edu.ar/#/task/sopa_de_letras/statement

#include <iostream>
#include <vector>


using namespace std;


bool buscar_en_filas(vector<string> sopa, string s){    
    int a=0;
    for (auto i : sopa){//miramos por filas
        for(int j=0;j<i.size();j++){//ingrasamos a cada pos
            if(i[j]==s[a])a++;//vemos si coincide, y incrementamos a para ver tambien la siguiente pos
            else a=(i[j]==s[0]);//empesamos de vuelta si no coincide
            if(a==s.size())return true;//si conte tantas igualdades seguidas como el tamaño de la palabra
                                       //devuelvo 1
        } a=0;
    }
    return false;
}

bool buscar_en_columnas(vector<string> sopa, string s){    
    int a=0;
    for (int i=0;i<sopa[0].size();i++){//miramos por filas
        for(int j=0;j<sopa.size();j++){//ingrasamos a cada pos
            if(sopa[j][i]==s[a])a++;//vemos si coincide, y incrementamos a para ver tambien la siguiente pos
            else a=(sopa[j][i]==s[0]);
            if(a==s.size())return true;//si conte tantas igualdades seguidas como el tamaño de la palabra
                                       //devuelvo 1
        } a=0;
    }
    return false;
}

string girar(string s){
    string rev;
    for(int i=s.size()-1;i>=0;i--){
        rev.push_back(s[i]);
    }
    return rev;
}

int main()
{
    int N, M, Z;
    string s,rev;
    vector<string> sopa;
    vector<string> palabras;
    cin>>N>>M>>Z;

    vector<bool> check(Z, 1);//un vector para guardar si aparece la palabra, por defecto estan todas

    for(int i=0;i<N;i++){//ingresamos la sopa
        cin>>s;
        sopa.push_back(s);        
    }
    for(int i=0;i<Z;i++){//ingresamos las palabras a buscar
        cin>>s;
        palabras.push_back(s);
    }

    for(int i=0;i<Z;i++){//buscamos en la sopa...
        rev = girar(palabras[i]);
        if(buscar_en_filas(sopa,palabras[i]))check[i]=1;//...de derecha a izquierda
        else if(buscar_en_filas(sopa,rev))check[i]=1;//...de izquierda a derecha
        else if(buscar_en_columnas(sopa,rev))check[i]=1;//...de abajo a arriba
        else if(buscar_en_columnas(sopa,palabras[i]))check[i]=1;//... de arriba a abajo
        
        else check[i]=0;//si no se encuentra en ninguna, cambia a falso
    }
    for(int i=0;i<Z;i++){//imprimimos la solucion
        if(check[i])cout<<"SI"<<endl;
        else cout<<"NO"<<endl;
    }
}