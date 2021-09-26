using namespace std;
#include<iostream>

int main(){
    int A, B, C, D;
    int d;
    cin >> A >> B >> C >> D;

    int AC=A+C;
    int BD=B+D;
    d=max(AC, BD)-min(AC, BD);

    int AD=A+D;
    int BC=B+C;
    int d1=max(AD, BC)-min(AD, BC);

    if (d>d1)d=d1;
    cout << d;

    return 0;

}