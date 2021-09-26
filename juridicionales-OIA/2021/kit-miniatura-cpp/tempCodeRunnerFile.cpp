int main(){
    vector<vector<int>> rojo(2, vector<int>(2,2));
    rojo[1][1]=1000;
    miniatura(1,1,rojo,rojo,rojo);
    cout << rojo[0][0];
}
