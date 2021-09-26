#include <iostream>
 
using namespace std;

char* tateti[]={"...", "...", "..."};

int main()
{
    
    for (int i=0; i<3;i++){
        for(int j=0; j<3; j++)cout << tateti[i][j] << '-';
        cout << "\n";
    }
    return 0;
}
