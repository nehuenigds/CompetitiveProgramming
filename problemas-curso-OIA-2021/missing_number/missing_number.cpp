#include<set>
#include<iostream>


using namespace std;

int main(){
    int n, aux;
    set<int> s;
    cin >> n;

    for (int i = 0; i < n-1; i++){
        cin >> aux;   
        s.insert(aux);
    }

    for (int i=1; i<=n; i++)if(s.find(i)==s.end())cout<<i;

}