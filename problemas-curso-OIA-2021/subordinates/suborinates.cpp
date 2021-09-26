#include<vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> subordinates_cant;
vector<vector<int>> adj2;

vector<int> bfs(int ini, int n){
    vector<int> dist(n+1, 1e9);
    dist[ini]=0;
    queue<int> Q;
    Q.push(ini);
    while(!Q.empty()){
        int nod = Q.front();
        Q.pop();
        for(auto nex : adj2[nod]){
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
    for(int i: adj2[n]){
        if(v[i]==false){
            dfs(i,v);
            subordinates_cant[n]+=subordinates_cant[i]+1;
        }
        else subordinates_cant[n]+=subordinates_cant[i]+1;
    }
}

int main()
{
    int N,a;
    cin >> N;
    adj2.resize(N+1);
    subordinates_cant.resize(N+1);
    for(auto &i :subordinates_cant)i=0;

    for(int i=2;i<=N;i++){
        cin >> a;
        adj2[a].push_back(i);
    }
    //vector<int> dist =bfs(1, N);
    //vector<int> result(N,0);

    vector<bool> visits(N+1, 0);
    dfs(1, visits);
    for(int i=1;i<=N;i++)cout<< subordinates_cant[i] << " ";
}