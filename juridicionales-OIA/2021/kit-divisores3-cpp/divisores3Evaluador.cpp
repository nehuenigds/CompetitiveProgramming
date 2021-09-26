#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> divisores(long long N, long long M);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    long long M;
    cin >> M;
    vector<long long> returnedValue;
    returnedValue = divisores(N, M);
    for (int i = 0; i < int(returnedValue.size()); i++) {
        if (i > 0) cout << " ";
        cout << returnedValue[i];
    }
    cout << "\n";
    return 0;
}
