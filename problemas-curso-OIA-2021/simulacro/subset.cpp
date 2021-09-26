//https://codeforces.com/group/T5DBToewAX/contest/343251/problem/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int S[t];
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        vector <int> Z(n);
        for(int j=0;j<n;j++){
            cin>>Z[j];
        }
        vector<int> A;
        vector<int> B;
        sort(Z.begin(), Z.end());
        S[i]=0;

        for(int i=0; i < Z.size();i++){
            if(i%2==0)
                A.push_back(Z[i]);
            else
                B.push_back(Z[i]);
        }
        reverse(A.begin(), A.end());
        A.push_back(-1);
        reverse(A.begin(), A.end());
        reverse(B.begin(), B.end());
        B.push_back(-1);
        reverse(B.begin(), B.end());
        for(auto i:A)cout<<i;
        cout<<endl;
        for (auto i:B)cout<<i;
        cout<<endl;
        
        for (int j=0; j<A.size()-1; j++){
            if(A[j]+1<A[j+1]){
                S[i]+=A[j]+1;
                //cout<<S[i]<<"  "<<A[j]+1<<endl;
                j=A.size()-1;
            }
            if(j==A.size()-2){
                S[i]+=A[j+1]+1;
                cout<<S[i]<<"  "<<A[j+1]+1<<endl;
            }
        }
        for (int j=0; j<B.size()-1; j++){
            if(B[j]+1<B[j+1]){
                S[i]+=B[j]+1;
                cout<<S[i]<<"  "<<B[j]+1<<endl;
                j=B.size()-1;
            }
            if(j==B.size()-2){
                S[i]+=B[j+1]+1;
                cout<<S[i]<<"  "<<B[j+1]+1<<endl;
            }
        }

    }
    for(auto i:S)cout<<i;

    return 0;
}