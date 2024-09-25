#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve(){
    int n, x; cin >> n >> x;
    int a[n]; for (int &x : a) cin >> x;
    int l = 0, r = 0, res = 1e9;
    ll sum = a[l];
    while (l <= r && r <= n - 1){
        if (sum <= x){
            r++;
            sum += a[r];
        }
        else {
            res = min(res, r - l + 1);
            sum -= a[l];
            l++;
        }
    }
    if (res == 1e9) cout << -1 << endl;
    else cout << res << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}