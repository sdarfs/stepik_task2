//Дан двумерный массив размером n×m (n и m не превосходят 1000). 
//Симметричный ему относительно главной диагонали массив называется транспонированным к данному. 
//Он имеет размеры m×n: 
//строки исходного массива становятся столбцами транспонированного, столбцы исходного массива становятся строками транспонированного.

#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    //input numbers to massive
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    //transposed matrix
    for (int i = 0 ; i < m; i ++){
        for(int j = 0; j < n;j++){
            cout<<a[j][i]<<" ";
        }
        cout << endl;
    }

    return 0;
}
