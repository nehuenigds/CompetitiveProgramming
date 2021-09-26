using namespace std;

#include<iostream>
#include<vector>

int main(){
    int N;
    int a;
    int can_pares=0;
    vector <int> lista;
    cin>>N;


    for (int i = 0; i < N; i++)
    {
        cin>>a;
        lista.push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = N-1; j > i; j--)
        {
            ///cout<<j;
            can_pares+=((lista[i]+lista[j])%10==0);
        }        
    } 
    cout<<can_pares;
    
}