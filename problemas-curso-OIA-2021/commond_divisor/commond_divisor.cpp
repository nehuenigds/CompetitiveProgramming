//https://cses.fi/problemset/task/1713/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main() {
    int n,max=1;
    cin >> n;
    vector<int> v(n);
    for (auto &i:v)cin >> i;
    sort(v.end(),v.begin());
    cout << v[4];
    for (int i=0; i<v.size();i++){       
        for (int j=v.size()-1;j>i;j--){
            int m= gcd(v[i],v[j]);
            //cout << v[i] << " "<< v[j] <<" "<< n <<  " / ";
            if (m>max)max=m,i=1e6,j=0;
        }//cout << endl;
    }
    cout <<max;
}