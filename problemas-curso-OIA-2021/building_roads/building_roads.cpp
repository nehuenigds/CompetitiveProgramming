#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;
vector <bool> visit;

void DFS(int nodo){
    visit[nodo] = true;

    for (int i = 0; i<v[nodo].size();i++){
        if (visit[v[nodo][i]]==false)DFS(v[nodo][i]);
    }
}


int main(){
    int n,m;
    cin >> n >> m;

    v.resize(n+1);
    visit = vector <bool> (n+1, false);

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> rep;
    for (int i = 1; i < v.size(); i++)
    {
        if(visit[i]==false){
            DFS(i);
            rep.push_back(i);
        }
    }
    cout << rep.size()-1 << endl;

    for(int i=1; i<rep.size(); i++)
    {
        cout << rep[i-1] << " " << rep[i] << endl;
    }

    return 0;
}