#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
/* Codeforces */
void solve(){
    int n, k; cin >> n >> k;
    if (log2(n) < k){
        cout << n + 1 << endl;
    }
    else cout << (int)pow(2, k) << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}