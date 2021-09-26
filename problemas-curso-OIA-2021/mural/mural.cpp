#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


void pintar_filas(vector<vector<int>> &m, int ph){
    int nf;
    char p;
    int cd, ch;
    for(int i=0; i<ph; i++){
        cin >> nf >> p >> cd >> ch;
        for (int j=cd-1; j<ch; j++)m[nf-1][j]+=p;
    }
}


void pintar_columnas(vector<vector<int>> &m, int pv)
{
    int nc;
    char p;
    int fd, fh;
    for (int  i = 0; i < pv; i++){
        cin >> nc >> p >> fd >> fh;
        for (int j=fd-1; j<fh; j++)m[j][nc-1]+=p;
    }
}


void imprimir_pared(vector<vector<int>> &m)
{
    char a;
    ofstream cout("mural.out");

    for (int i = 0; i < m.size(); i++){
        for (int j = 0; j < m[0].size(); j++){
            int n=m[i][j];
            if (n=='A'|| n==2*'A')a='A';
            else if (n=='Z' || n==2*'Z')a='Z';
            else if (n=='R'|| n==2*'R')a='R';
            else if (n=='R'+'A')a='N';
            else if (n=='R'+'Z')a='P';
            else if (n=='A'+'Z')a='V';
            else a='.';
            cout << a << "";
        }
        cout << "\n";
    }
}


int main()
{
    int Z, A, R;
    int T, ph, pv;
    freopen("mural.in", "r", stdin);

    cin >> T >> ph >> pv;

    vector<vector<int>> m(T, vector<int>(T,0));

    pintar_filas(m, ph);
    pintar_columnas(m, pv);

    imprimir_pared(m);
    return 0;
}