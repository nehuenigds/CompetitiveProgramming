#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> ady;
vector<char> tip;
vector<int> cant_0={0,0,0}; //a, b, c
vector<int> cant_1={0,0,0};

int det_max(int a, int b, int c){
    int cant, cant2;
    cant = cant_0[a]+cant_0[b] +cant_1[a]+cant_1[c];
    cant2 = cant_0[a]+cant_0[c] +cant_1[a]+cant_1[b];
    return min(cant, cant2);
}

vector<int> bfs(int n, int N){
    vector<int> dist(N+1, 1e9);
    dist[n]=0;
    queue<int> Q;
    Q.push(n);
    while(!Q.empty()){
        int nod=Q.front();
        //cout << i_nod << " " << j_nod << " | ";
        Q.pop();
        for (int i=0; i<ady[n].size();i++){
            int k=ady[n][i];
            if(dist[k]>dist[nod]+1){
                //cout << i << " " << j << " |
                dist[k]=dist[nod]+1;
                Q.push(k);
            }
        }
    }
    return dist;
}

int main(){
    freopen("repetidores.in","r",stdin);
    freopen("repetidores.out","w",stdout);
    int N;
    cin >> N;
    ady.resize(N+1); 
    tip.resize(N+1);
    for (int i=0; i<N; i++){
        int I,M;
        cin >> I >> tip[I] >> M;
        for (int j=0; j<M;j++){
            int a;
            cin >> a;
            ady[I].push_back(a);
            //cout << '|';
            ady[a].push_back(I);
        }
    }

    vector <int> dist=bfs(1,N);
    for(int i=1; i<N+1;i++){
        if(dist[i]%2==1)
            cant_0[tip[i]-'A']++;
        else
            cant_1[tip[i]-'A']++;
    }
    char c1, c2;
    int cant;
    //a,b
    cant = det_max(2,0,1);
    c1='A';
    c2='B';
    //a,c
    if (cant>det_max(1,0,2))cant=det_max(1,0,2), c1='A',c2='C';
    //c,b
    if (cant>det_max(0,1,2))cant=det_max(0,1,2), c1='B',c2='C';
    cout << cant << " " << c1 << " " << c2;
    cout << endl;
    return 0;
}