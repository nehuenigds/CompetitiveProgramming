#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


void pintar_filas(vector<vector<char>> &m, int ph)
{
    int nf;
    char p;
    int cd, ch;
    for(int i=0; i<ph; i++)
    {
        cin >> nf >> p >> cd >> ch;
        for (int j=cd-1; j<ch; j++)m[nf-1][j]=p;
    }
}


void pintar_columnas(vector<vector<char>> &m, int pv)
{
    int nc;
    char p;
    int fd, fh;
    for (int  i = 0; i < pv; i++)
    {
        cin >> nc >> p >> fd >> fh;
        for (int j=fd-1; j<fh; j++){
            char a,n = m[j][nc-1];
            if (n=='.')a=p;
            else if (n==p)a=p;
            else if((p+n)==('A'+'R'))a='N';
            else if((p+n)==('A'+'Z'))a='V';
            else if((p+n)==('R'+'Z'))a='P';
            m[j][nc-1]=a;    
        } 
    }
}


void imprimir_pared(vector<vector<char>> &m)
{
    ofstream cout("mural.out");

    for (int i = 0; i < m.size(); i++){
        for (int j = 0; j < m[1].size(); j++){
            cout << m[i][j] << "";
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

    vector<vector<char>> m(T, vector<char>(T,'.'));

    pintar_filas(m, ph);
    pintar_columnas(m, pv);
    
    imprimir_pared(m);
    return 0;
}