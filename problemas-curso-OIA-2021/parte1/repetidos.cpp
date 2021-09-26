using namespace std;
#include<iostream>
#include<vector>

int main(){

    int n=1;
    bool cond=0;
    vector <int> v;
    while (n!=0)
    {
        cin >> n;
        v.push_back(n);

        for (int i = 0; i < v.size()-1; i++)
        {
            if (n==v[i])cond=1;
            
        }
        v.push_back(n);
    }
    if (cond)cout<<"Hay repetidos";
    else cout<<"No hay repetidos";
}