using namespace std;
#include<iostream>

int main(){
    int N;
    cin >> N;
    int divs;
    for (int i = 2; i <= N; i++)
    {
        divs=0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)divs++;
        }
        if(divs<=2)cout<<i<<endl;   
    }
}