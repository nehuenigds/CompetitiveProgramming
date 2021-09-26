using namespace std;

#include<iostream>


void print_algorithm(int n){
    cout << n <<" ";
    if(n==1);
    else if(n%2==0)n=n/2,print_algorithm(n);
    else n=(n*3)+1,print_algorithm(n);
}


int main(){
    int long long n;

    cin >> n;

print_algorithm(n);
    // cout << n;
    // while(n!=1){
    // if(n%2==0)n=n/2;
    // else n=(n*3)+1;
    // cout << " " << n;
    // }


    return 0;
}