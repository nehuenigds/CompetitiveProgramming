#include <iostream>
#include <string>
#include <vector>

using namespace std;

void inicializar(vector<vector<int>> &rojo, vector<vector<int>> &verde, vector<vector<int>> &azul);

void miniatura(int k, int l, vector<vector<int>> &rojo, vector<vector<int>> &verde, vector<vector<int>> &azul);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m;
    cin >> m;
    int q;
    cin >> q;
    vector<vector<int>> rojo;
    rojo.resize(n);
    for (int i0 = 0; i0 < n; i0++) {
        rojo[i0].resize(m);
        for (int i1 = 0; i1 < m; i1++) {
            cin >> rojo[i0][i1];
        }
    }
    vector<vector<int>> verde;
    verde.resize(n);
    for (int i0 = 0; i0 < n; i0++) {
        verde[i0].resize(m);
        for (int i1 = 0; i1 < m; i1++) {
            cin >> verde[i0][i1];
        }
    }
    vector<vector<int>> azul;
    azul.resize(n);
    for (int i0 = 0; i0 < n; i0++) {
        azul[i0].resize(m);
        for (int i1 = 0; i1 < m; i1++) {
            cin >> azul[i0][i1];
        }
    }
    inicializar(rojo, verde, azul);
    for (int qindex = 0; qindex < q; qindex++) {
        int k,l;
        cin >> k >> l;
        rojo = vector<vector<int>>(k, vector<int>(l,0));
        verde = vector<vector<int>>(k, vector<int>(l,0));
        azul = vector<vector<int>>(k, vector<int>(l,0));
        miniatura(k,l, rojo, verde, azul);
        for (int i = 0; i < int(rojo.size()); i++) {
            for (int ii = 0; ii < int(rojo[i].size()); ii++) {
                if (ii > 0) cout << " ";
                cout << rojo[i][ii];
            }
            cout << "\n";
        }
        for (int i = 0; i < int(verde.size()); i++) {
            for (int ii = 0; ii < int(verde[i].size()); ii++) {
                if (ii > 0) cout << " ";
                cout << verde[i][ii];
            }
            cout << "\n";
        }
        for (int i = 0; i < int(azul.size()); i++) {
            for (int ii = 0; ii < int(azul[i].size()); ii++) {
                if (ii > 0) cout << " ";
                cout << azul[i][ii];
            }
            cout << "\n";
        }
    }
    return 0;
}
