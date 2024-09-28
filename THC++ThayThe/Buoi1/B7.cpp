#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int pre[10005];
void build(int a[], int n){
    pre[0] = a[0];
    for (int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + a[i];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n, q; cin >> n >> q;
        int a[n]; for (int &x : a) cin >> x;
        build(a, n);
        while (q--){
            int l, r; cin >> l >> r;
            l--; r--;
            if (l == 0) cout << pre[r] << endl;
            else cout << pre[r] - pre[l - 1] << endl;
        }
    }
    return 0;
}