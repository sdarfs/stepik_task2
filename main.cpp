#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    //input numbers to massive
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    int i_1 = 0, j_1 = 0;
    int k;
    cin >>k;
    if (k > 0){
        i_1 += k;
    }
    else if(k < 0){j_1 -= k;}
    for (int i=i_1, j = j_1;((i < n)&&(j<n));i++,j++){
        cout<<a[i][j]<<" ";
    }
    cout << endl;

    return 0;
}
