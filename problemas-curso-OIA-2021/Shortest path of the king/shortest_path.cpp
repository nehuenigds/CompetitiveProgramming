//https://codeforces.com/problemset/problem/3/A

#include <bits/stdc++.h>

using namespace std;

   vector<int> dj = {  1,    1,   1,   0,   0,  -1,   -1,   -1};
   vector<int> di = {  1,   -1,   0,  -1,   1,   0,   -1,    1};
vector<string> ds = {"RU", "LU", "U", "L", "R", "D", "LD", "RD"};

vector <vector<int>> o(8, vector<int> (8,9));
vector <string> v(8, "........");


bool esValido(int i, int j){
    return (i>=0 && i<8 && j>=0 && j<8);
}


void bfs(int i_ini, int j_ini){
    vector<vector<int>> dist(8, vector<int>(8,1e9));
    dist[i_ini][j_ini]=0;
    queue<pair<int,int>> Q;
    Q.push({i_ini, j_ini});
    while(!Q.empty()){
        int i_nod=Q.front().first;
        int j_nod=Q.front().second;
        //cout << i_nod << " " << j_nod << " | ";
        Q.pop();
        for (int k=0; k<8;k++){
            int i=i_nod+di[k];
            int j=j_nod+dj[k];
            if(esValido(i,j) && (dist[i][j]>dist[i_nod][j_nod]+1)){
                //cout << i << " " << j << " | ";
                o[i][j]=k;
                dist[i][j]=dist[i_nod][j_nod]+1;
                Q.push({i,j});
            }
        }
    }
}


int main(){
    string ini, fin;
    cin >> ini >> fin;
    
    int i_ini=ini[0]-'a';
    int j_ini=ini[1]-'1';
    int i_fin=fin[0]-'a';
    int j_fin=fin[1]-'1';
    //cout << i_ini << " " << j_ini << endl;
    //cout << i_fin << " " << j_fin << endl;

    
    bfs(i_ini,j_ini);
    vector<string> salida;

    // for (auto i:o){
    //     for (auto j:i)cout << j <<" ";
    //     cout <<endl;
    // }

    int i=i_fin,j=j_fin;
    while(i!=i_ini || j!=j_ini){
        int k=o[i][j];
        //cout << k;
        salida.push_back(ds[k]);
        i-=di[k];
        j-=dj[k];
        //cout << i << " " << j << " | ";
    }
    cout << salida.size()<<endl;
    reverse(salida.begin(), salida.end());
    for(auto i:salida)cout << i <<endl;
    return 0;
}