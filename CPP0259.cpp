#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n, p; cin >> n >> m >> p;
    int a[n][m], b[m][p];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++) cin >> b[i][j];
    }
    int res[n][p];
    memset(res, 0, sizeof(res));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            for (int k = 0; k < m; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
}