#include <bits/stdc++.h>


using namespace std;

int main()
{
    set<int> s;
    int n,a;

    cin >>n;

    for (int i=0; i<n; i++){
        
        cin >> a;
        if(s.find(a)!=s.end());
        else{
            s.insert(a);
        }
    }

    cout<<s.size();




}