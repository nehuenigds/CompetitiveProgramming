#include <iostream>
#include<fstream>

using namespace std;

int main(){
    freopen("imagenes.in","r",stdin);
    freopen("imagenes.out","w",stdout);
    string s, S;

    int aux;

    cin >> s>> S;
    for (int i = 0; i <= s.size(); i++)
    {
        if(s[i-1]==s[i]){
            aux++;
            if (i==s.size() && aux > 3)cout << "(" << s[i-1] << aux << ")";
        }
        else{ 
            if (aux > 3)cout << "(" << s[i-1] << aux << ")";
           
            else for(int j=0;j<aux;j++)cout<<s[i-1];
            aux=1;}
    }

    cout<<"\n";

    int i=0;
    while (i<S.size())    
    {
        if (S[i]!='(')cout<<S[i],i+=1;
        else{ 
            for(int j=0;j<(S[i+2]-'0');j++)cout<<S[i+1];
            i+=4;}        
    }
}