#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> palogol(vector<int> &x, vector<int> &y);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    x.resize(n);
    y.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        cin >> y[i];
    }
    vector<string> returnedValue;
    returnedValue = palogol(x,y);
    for (int i = 0; i < int(returnedValue.size()); i++) {
        cout << returnedValue[i] << "\n";
    }
    return 0;
}
