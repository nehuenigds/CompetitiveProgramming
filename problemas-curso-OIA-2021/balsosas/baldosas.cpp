#include <fstream>
#include <iostream>

using namespace std;

int main(){
    freopen("baldosas.in","r",stdin);
    freopen("baldosas.out","w",stdout);
    string s;
    int pos,n;
    char a;
    cin >> s;
    for(int i=0; i<s.size();i++)if(s[i]!='*')pos=i,a=s[i];

    if(a=='R')n=0;
    else if(a=='V')n=1;
    else if(a=='A')n=2;

    for (int i = pos+n; i < s.size()+n+pos; i++){
        if((i+pos)%3==0)a='R';
        else if((i+pos)%3==1)a='V';
        else a='A';
        cout << a;
    }
}