#include<iostream>
#include<vector>

using namespace std;

void suma_columnas(int n, int m,  vector<vector<int>> mat){
    for (int i = 0; i < n; i++)
    {
        int suma = 0;
        for (int j = 0; j < m; j++)
        {
            suma+=mat[i][j];
        }
        cout << suma << " ";
    }
}

void suma_filas(int n, int m,  vector<vector<int>> mat){
    for (int i = 0; i < m; i++)
    {
        int suma = 0;
        for (int j = 0; j < n; j++)
        {
            suma+=mat[j][i];
        }
        cout << suma << " ";
    }
}

int main() {
    int n,m,aux;
    cin >> n >> m;

    vector<vector<int>> mat(n,vector<int>(m,0));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> aux;
            mat[i][j]=aux;
    }}
    
    suma_columnas(n, m, mat);
    cout << endl;
    suma_filas(n, m, mat);


}