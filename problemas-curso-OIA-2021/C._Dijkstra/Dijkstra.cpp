
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

typedef long long ll;

void imprimir_ruta(int ini, int fin, vector<int> padre){
    int i=fin;
    vector <int> ruta;
    ruta.push_back(i);
    while (padre[i]!=ini){
        ruta.push_back(padre[i]);
        i = padre[i];
    }   ruta.push_back(1);

    reverse(ruta.begin(), ruta.end());
    
    for (auto i:ruta)cout << i << " ";
    }

int main()
{
    int n, m;
    cin >> n >> m;
    vector <vector <pair<int, int> > > ady(n+1);

    for(int i=0; i<m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ady[a].push_back({b, c});
        ady[b].push_back({a, c});
    }

    vector <ll> d(n+1, 1e16);
    priority_queue <pair<ll, int> > pq;
    vector <int> padre(n+1, -1);

    d[1] = 0;
    pq.push({0, 1});

    while(pq.size())
    {
        int nodo = pq.top().second;
        ll x = -pq.top().first;

        pq.pop();

        if(x != d[nodo])
            continue;

        for(int i=0; i<ady[nodo].size(); i++)
        {
            int vecino = ady[nodo][i].first;
            int costo = ady[nodo][i].second;
            if(d[vecino] > d[nodo]+costo)
            {
                padre[vecino] = nodo;
                d[vecino] = d[nodo]+costo;
                pq.push({-d[vecino], vecino});
            }
        }
    }
    if(d[n]==1e16)cout << -1 <<endl;
    else imprimir_ruta(1,n,padre);
    return 0;
}