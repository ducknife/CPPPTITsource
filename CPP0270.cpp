#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        int x[n][m], y[3][3];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) cin >> x[i][j];
        }
        for (int i = 0; i < 3; i++) cin >> y[i][0] >> y[i][1] >> y[i][2];
        ll res[305][305];
        for (int i = 0; i < n - 2; i++){
            for (int j = 0; j < m - 2; j++){
                ll sum = 0;
                for (int k = 0; k < 3; k++){
                    for (int l = 0; l < 3; l++){
                        sum += 1ll * x[i + k][j + l] * y[k][l];
                    }
                }
                res[i][j] = sum;
            }
        }
        ll sum = 0;
        for (int i = 0; i < n - 2; i++){
            for (int j = 0; j < m - 2; j++) sum += res[i][j];
        }
        cout << sum << endl;
    }
}