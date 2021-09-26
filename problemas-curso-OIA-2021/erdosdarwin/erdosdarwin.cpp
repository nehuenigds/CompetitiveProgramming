#include<iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj;

vector<int> bfs(int ini, int n){
    vector<int> dist(n+1, 1e9);
    dist[ini]=0;
    queue<int> Q;
    Q.push(ini);
    while(!Q.empty()){
        int nod = Q.front();
        Q.pop();
        for(auto nex : adj[nod]){
            if(dist[nex]>dist[nod]+1){
                dist[nex] = dist[nod]+1;
                Q.push(nex);
            }
        }
    }
    return dist;  
}


int main(){
    int N, M, d, a,b;
    cin>>N >>M >>d;
    adj.resize(N+1);
    for(int i = 0;i<M;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> dist_erdos=bfs(1, N);
    vector<int> dist_darwin=bfs(N, N);

    vector<bool> menores_d;
    

    for(int i = 1; i<dist_erdos.size();i++){
        if(dist_erdos[i]!=1e9 && dist_darwin[i]!=1e9 && dist_erdos[i]+dist_darwin[i]<=d)menores_d.push_back(1);
    }

    cout << menores_d.size(); 
}