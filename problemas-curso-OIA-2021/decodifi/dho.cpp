

int n;
cin>>n;
vector<vector<int>> A(n);
for (int i=0;i<n;i++){
    int a;
    cin>>a;
    for(int j=0;j<a;j++){
        int b;
        cin>>b;
        A[i].push_back(b);
    }
}