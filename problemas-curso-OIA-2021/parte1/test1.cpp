#include <iostream>
#include <string>
 
using namespace std;

int main()
{
    string nombre;
    int a;
    int b;
    cout << "Cual es tu nombre?" << endl;
    cin >> nombre;
    cout << "Buenos dias " << nombre << "!" << endl;
    cout << "TU primera letra es " << nombre[0] << endl;
    cout << "esbribe dos numeros" << endl;
    cin >> a >> b;
    int suma(a ,b);
    cout << "la resta es  " << a - b << endl;
    cout << "la divison es  " << a / b << " y te sobran" << a % b << endl; // 14 % 5 = 4 --- 14 / 5 = 2
    return 0;
}
