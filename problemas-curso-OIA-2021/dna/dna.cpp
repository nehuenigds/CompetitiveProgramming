#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int aux=1, max=1;

    cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i-1]==s[i]){
            aux++;
            if(aux>max)max=aux;
        }
        else aux=1;
    }
    
    cout<<max;
}