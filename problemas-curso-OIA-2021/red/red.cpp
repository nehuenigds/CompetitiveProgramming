#include <bits/stdc++.h>

using namespace std;

vector <vector<int>> ady(1e6+1);

void dfs(int ini, vector<bool> &visit){
    visit[ini]=1;
    for(auto i:ady[ini]){
        if(visit[i]!=true){
            dfs(i,visit);
        }
    }
}


int main(){
    freopen("red.in","r",stdin);
    freopen("red.out","w",stdout);
    int a, b;
    char s;
    cin >> s;
    while (s!='F'){
        cin >> a >> b;
        if(s=='C'){
            ady[b].push_back(a);
            ady[a].push_back(b);
        }
        else if(s=='P'){
            vector <bool> visit(1e6+1, 0);
            //cout << a << b << endl;
            dfs(a, visit);
            if(visit[b]==true) cout << 'S';
            else cout << 'N';
            cout <<endl;
        }
        cin >> s;
        //cout << s;
    }
}