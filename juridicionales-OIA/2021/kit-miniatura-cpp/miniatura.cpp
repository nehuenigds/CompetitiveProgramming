#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<vector<int>> roojo;
vector<vector<int>> azzul;
vector<vector<int>> veerde;

void inicializar(vector<vector<int>> &rojo, vector<vector<int>> &verde, vector<vector<int>> &azul) {
    roojo=rojo;
    azzul=azul;
    veerde=verde;
}

void miniatura(int k, int l, vector<vector<int>> &rojo, vector<vector<int>> &verde, vector<vector<int>> &azul) {
    int n=roojo.size();
    int m=roojo[0].size();
    for(int i=0;i<k;i++){
        for (int j=0;j<l;j++){
            int s_r=0,s_a=0,s_v=0,cant=0;
            for(int ii=(n*i)/k;ii<(n*(i+1))/k;ii++){
                for(int jj=(m*j)/l;jj<(m*(j+1))/l;jj++){
                    s_r+=roojo[ii][jj];
                    s_v+=veerde[ii][jj];
                    s_a+=azzul[ii][jj];
                    cant++;
                }
            }
            //cout<<cant;
            rojo[i][j]=s_r/cant;
            azul[i][j]=s_a/cant;
            verde[i][j]=s_v/cant;
        }
    }
}

int main(){
    vector<vector<int>> rojo(4,vector<int>(4,2));
    rojo[0][0]=100;
    vector<vector<int>> azul(4,vector<int>(4,2));
    vector<vector<int>> verde(4,vector<int>(4,2));
    inicializar(rojo, azul, verde);
    int k=1,l=2;
    rojo = vector<vector<int>>(k, vector<int>(l,0));
    verde = vector<vector<int>>(k, vector<int>(l,0));
    azul = vector<vector<int>>(k, vector<int>(l,0));
    miniatura(k,l, rojo, verde, azul);
    for(auto i:rojo){
        cout<<endl;
        for(auto j:i)cout<<" " << j <<" ";
    }
}