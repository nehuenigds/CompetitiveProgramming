using namespace std;

#include<iostream>

int main(){
    int n=0;
    int suma=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        suma=0;
        for (int j = 1; j <= (i/2); j++)
        {
            if(i%j==0)suma+=j;
        }
        if(suma==i)cout<<i<<endl;
    }
    return 0;
}