#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
/* Dynamic Programming */
void solve(){
    int n, a, b; cin >> n >> a >> b;
    vector<int> dp(n + 1);
    dp[1] = a, dp[2] = min(2 * a, b);
    for (int i = 3; i <= n; i++){
        dp[i] = min(dp[i - 1] + a, dp[i - 2] + b);
    }
    cout << dp[n] << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}