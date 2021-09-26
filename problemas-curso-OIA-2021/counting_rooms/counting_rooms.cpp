//https://cses.fi/problemset/submit/1192/
#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<string> v;

vector<int> di = {-1,1,0,0};
vector<int> dj = {0,0,-1,1};

bool esValido(int vi, int vj){
    return (0<=vi && vi<n && 0<=vj && vj<m);
}

void dfs(int i, int j){
    v[i][j]='#';
    for(int k=0; k<4;k++){
        int vi = i+di[k];
        int vj = j+dj[k];
        if (esValido(vi, vj) && v[vi][vj]=='.'){
            dfs(vi,vj);
        }
    }
}

int main(){
    cin >> n >> m;
    v.resize(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int res=0;
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            if(v[i][j]=='.'){
                dfs(i, j);
                res++;
            }
        }
    }
    cout << res <<endl;
}