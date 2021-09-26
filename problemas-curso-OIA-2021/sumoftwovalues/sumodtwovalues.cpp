using namespace std;
#include <bits/stdc++.h>

int main(){
    int long n, x, aux;
    vector<int> v;
    set<int> s;
    cin>>n>>x;
    for (int i = 0; i < n; i++)
    {
        cin >>aux;
        v.push_back(aux);
        s.insert(aux);
    }

    for (int i = 0; i < n; i++)
    {
        if(s.find(x-v[i])!=s.end()){
            for (int j = i+1; j < n; j++)
           {
                if(v[i]+v[j]==x){
                cout << i+1 << " " <<j+1;
                return 0;   
                }       
            }
            
        }
        
    }
    
    cout << "IMPOSSIBLE";
    return 0;
    
    


}