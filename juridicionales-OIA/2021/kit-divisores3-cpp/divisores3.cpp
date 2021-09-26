#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<long long> divisores(long long N, long long M) {
    
    vector<long long> ret={0,0};
    
    long long p=2;
    vector<long long> S;
    long long n=N;
    while ((p*2)<=N)
    {      
        if(n%p==0){
            S.push_back(p);
            n/=p;
        }
        else p++;
    }
    n=N;
    long long a=0;
    long long s=0:
    while(n!=1){
        long long min=(((n/S[0])*(n/S[0]))%M)*(((n/S[0])*(n/S[0]))%M), max=min;
        for (int i=0;i<S.size();i++){
            if(n%s[i]==0){
                long long a=((n/S[i])*(n/S[i]))%M;
                if(a*a<min)min=a*a;
                else if (a*a>max)max=a*a;                
            }
            if(a%2==0)
                s+=min;
            else 
                s+=max;
        }
    }
    res[0]=s
    


    for (auto i : S)cout << i;


    
    return ret;
}

int main(){
    vector<long long> q;
    q=divisores(100,3);
    return 0;
}
