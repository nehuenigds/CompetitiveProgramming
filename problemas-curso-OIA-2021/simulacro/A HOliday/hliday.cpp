//https://codeforces.com/group/T5DBToewAX/contest/343251/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int S=0, max=0;
    

    int n;
    cin>>n;
    int a;
    int list[n];
    for (int i = 0; n>i; i++){
        cin>>list[i];
        if(list[i]>max)max=list[i];
    }
    for (int i =0; n>i;i++){
        S+=(max-list[i]);
    }
    cout << S;
    return 0;
}