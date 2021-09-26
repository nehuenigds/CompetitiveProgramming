#include<vector>
#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> mat(n,vector<int>(m,0));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)cin >> mat[i][j];
    }
    for(int i=0;i<mat[0].size();i++){
        for (int j = 0; j < mat.size(); j++)cout<<mat[j][i]<<" ";
        cout<<"\n";
    }
    return 0;
}
