#include <string>
#include <vector>

using namespace std;

vector<string> palogol(vector<int> &x, vector<int> &y) {
    vector<string> res;
    for (int i=0; i<x.size();i++){
        if(x[i]>0 && x[i]<732 && y[i]<232)
            res.push_back("GOL");
        else if(x[i]>=0 && x[i]<=732 && y[i]<=232)
            res.push_back("PALO");
        else 
            res.push_back("AFUERA");
    }
    return res;
}
