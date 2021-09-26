#include<iostream>

using namespace std;

int main(){
    long long A, B, C;
    long long a, b, c;   
    
    int i;

    cin >> A >> B >> C;

    if(A<B && B<C){
        a = A; b = B; c = C;
    }
    else if(A<C && C<B){
        a = A; b = C; c = B;
    }
    else if(C<A && A<B){
        a = C; b = A; c = B;
    }
    else if(C<B&&B<A){
        a = C; b = B; c = A;
    }
    else if(B<C&&C<A){
        a = B; b = C; c = A;
    }
    else{
        a = B; b = A; c = C;
    }


    cout << a << " " << b << " " << "" << c << endl;
}