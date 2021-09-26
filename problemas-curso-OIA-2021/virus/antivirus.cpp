#include<fstream>
#include<vector>

using namespace std;


int main(){
    ifstream cin ("antivirus.in");
    ofstream cout ("antivirus.out");

    int N;
    char a, b;
    string palabra;

    cin >> N >> a >> b;

    cin >> palabra;
    
    for (int i = 0; i < palabra.size()-2; i++)
    {
        if((palabra[i]==a and palabra[i+1]==b) and palabra[i+2]==a)
            palabra.erase(palabra.begin() + (i + 1));
    }
    
    cout << palabra.size() << "\n" << palabra;
    

    return 0;
}