/* Tính tổ hợp chập K của N chia dư cho 1e9 + 7
sử dụng công thức Pascal tính nCk = (n - 1)C(k - 1) + (n - 1)Ck; */
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll C[1005][1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i <= 1000; i++){
        for (int j = 0; j <= i; j++){
            /* tính C[i][j] */
            if (j == 0 || i == j) C[i][j] = 1; /* Nằm trên cột 0 hoặc nằm trên đường chéo chính*/
            else {
                C[i][j] = (C[i - 1][j - 1] % MOD + C[i - 1][j] % MOD) % MOD;
            }
        }
    }
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        cout << C[n][k] << endl;
    }
    return 0;
}