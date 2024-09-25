#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int a[505][505];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        }
        int dp[n + 1][m + 1];
        int res = 0;
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if (i == 1 || j == 1) dp[i][j] = a[i][j];
                else {
                    if (a[i][j]) dp[i][j] = min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]}) + 1;
                }
                res = max(res, dp[i][j]);
            }
        }
        cout << res << endl;
        memset(a, 0, sizeof(a));
    }
    return 0;
}