
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

typedef long long ll;

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
    int i=n;
    vector <int> ruta;
    ruta.push_back(i);
    while (padre[i]!=1)
    {
        ruta.push_back(padre[i]);
        i = padre[i];
    }ruta.push_back(1);
    reverse(ruta.begin(), ruta.end());
    for (auto i:ruta)cout << i << " ";
    cout << endl;
    return 0;
}