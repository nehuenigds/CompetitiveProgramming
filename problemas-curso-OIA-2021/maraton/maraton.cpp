using namespace std;

#include<vector>
#include<fstream>

int main() {

    ifstream cin ("maraton.in");
    ofstream cout ("maraton.out");
    
    int A;
    int jugador, categoria;
    vector <int> lista(11, 0);
    
    cin >> A;

    for(int i=0; i<A; i++){
        cin >> jugador>> categoria;
        if(lista[categoria]==0)
            lista[categoria]=jugador;
    }

    for(int i=1; i<=10; i++){
        cout<<i<<" "<<lista[i]<<endl;
    }
    return 0;
}