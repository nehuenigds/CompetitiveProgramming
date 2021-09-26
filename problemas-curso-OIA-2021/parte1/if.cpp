#include <iostream>
 
using namespace std;
 
int main()
{
    int x;
    cout << "ingrse un numer" << endl;
    cin >> x;
    if (x > 0 && x % 2 == 0)
        cout << "Positivo par" << endl;
    return 0;
}
