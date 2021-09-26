#include<string>
using namespace std;


string procesaPalabra(string s){
    
    string b;
    for (int i = 0; i < s.size()-1; i++){
        if(s[i]!='A')b+=s[i];
        else b+='B';
    }
    return b;
}