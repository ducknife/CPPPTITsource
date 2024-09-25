#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll F[25];
void build(){
    F[0] = F[1] = 1;
    for (int i = 2; i <= 20; i++){
        F[i] = F[i - 1] * i;
    }
}
void solve(){
    int n, r, g, b; cin >> n >> r >> g >> b;
    ll res = 0;
    for (int R = n; R >= r; R--){
        for (int G = n - R; G >= g; G--){
            int B = n - R - G;
            if (B >= b) res += F[n] / F[R] / F[G] / F[B];
        }
    }
    cout << res << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    build();
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}