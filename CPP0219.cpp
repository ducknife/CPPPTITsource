#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        int a[n][m];
        int res[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                res[i][j] = a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == 1){
                    for (int k = 0; k < m; k++){
                        if (a[i][k] == 0) res[i][k] = 1;
                    }
                    for (int l = 0; l < n; l++){
                        if (a[l][j] == 0) res[l][j] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) cout << res[i][j] << " ";
            cout << endl;
        }
    }
}