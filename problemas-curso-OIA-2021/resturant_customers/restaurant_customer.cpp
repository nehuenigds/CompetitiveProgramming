#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;

int main(){
    int n,a,b,m=0;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(2,0));
    for (int i=0; i<n; i++){
        cin >> a >>b;
        v[i][0]=a;
        v[i][1]=b;
    }
    sort(v.begin(),v.end());

    for (int i=0; i<n ;i++){
        
        int aux=1; 
        for (int j = i+1; j < n; j++)
        {
            if(v[i][1]>v[j][0])aux++;
            //else break;
        }
        if (aux>m)m=aux;
    }
    cout <<m;
}