#include<iostream>
using namespace std;

int main(){
    int a, b, r;
    string A="", B="", R="";
    cin >> a;
    cin >> b;
    r=a*b;

    if (a<10)
    {
        A=" ";
    }
    if (b<10)
    {
        B=" ";
    }
    if (r<10)
    {
        R="   ";
    }
    else if (r<100)
    {
        R="  ";
    }
        else if (r<1000)
    {
        R=" ";
    }

    cout << "  " << A << a << endl;
    cout << "x " << B << b << endl;
    cout << "----" << endl;
    cout << R << r;
}