#include<bits/stdc++.h>

using namespace std;

vector<string> palogol(vector<int> X, vector<int> Y){
    
    vector<string> res;
    for (int i=0; i<X.size();i++){
        if(X[i]>0 && X[i]<732 && Y[i]<232)
            res.push_back("GOL");
        else if(X[i]>=0 && X[i]<=732 && Y[i]<232)
            res.push_back("PALO");
        else 
            res.push_back("AFUERA");
    }
    return res;
}

