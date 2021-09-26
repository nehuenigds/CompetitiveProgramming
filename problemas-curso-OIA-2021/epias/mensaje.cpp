#include<fstream>
#include<algorithm>

using namespace std;

int main(){
    ifstream cin("mensaje.in");
    ofstream cout("mensaje.out");
    
    int N;
    string base, palabra;
    string estado="NO";
    char a, direcion;


    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        base.push_back(a);
    }
    
    cin >> palabra;

    //escaneo de deracha a I
    for (int i = 0; i < base.size(); i++)
    {   
        N=0;
        for (int j = 0; j < palabra.size(); j++)
        {   
            N+=(base[i+j]==palabra[j]);            
        }
        if(N==palabra.size())estado="SI",direcion='I';
        /* code */
    }
    

    if(estado=="NO"){
        reverse(base.begin(), base.end());
        for (int i = 0; i < base.size(); i++)
        {   
            N=0;
            for (int j = 0; j < palabra.size(); j++)
            {   
                N+=(base[i+j]==palabra[j]);            
            }
            if(N==palabra.size())estado="SI",direcion='D';
            /* code */
        }
    }
    // escanei de I a Z

    cout << estado<<"\n";
    if(estado=="SI")cout << direcion;

}