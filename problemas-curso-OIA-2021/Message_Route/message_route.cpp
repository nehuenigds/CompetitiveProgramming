//https://cses.fi/problemset/task/1667/
#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> ady;
vector<int> ruta;
int N;


vector<int> n_bfs(int ini, int n){
    vector<int> dist(n+1, 1e9);
    dist[ini]=0;
    queue<int> Q;
    Q.push(ini);
    while(!Q.empty()){
        int nod = Q.front();
        Q.pop();
        for(auto nex : ady[nod]){
            if(dist[nex]>dist[nod]+1){
                dist[nex] = dist[nod]+1;
                Q.push(nex);
            }
        }
    }
    return dist;  
}

void dfs(int n, vector<bool> &v){
    v[n]=1;
    for(auto i:ady[n]){
        if(v[i]==false)dfs(i,v);
    }
}

int main()
{
    int N, M, a ,b;
    cin >> N >> M;
    ady.resize(N+1);
    ruta.resize(N+1);
    vector<bool> visit(N+1,0);
    
    for(int i=0;i<M;i++){
    cin >> a>>b;
    ady[a].push_back(b);
    ady[b].push_back(a);
    }
    
    vector<int> dist  = n_bfs(1, N);
    if(dist[N]!=1e9){
        vector<int> x;
        a=N;
        while(a!=1){
            x.push_back(a);
            a=ruta[a];
        }x.push_back(a);
        reverse(x.begin(), x.end());
        cout << x.size()<< endl;
        for(auto i:x)cout<<i<<" ";
    }
    else cout << "IMPOSSIBLE";
    
    return 0;
}