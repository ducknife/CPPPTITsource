#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n]; for (int &x : a) cin >> x;
        ll max_cur = a[0], max_res = a[0];
        for (int i = 1; i < n; i++){
            max_cur = max(1ll * a[i], max_cur + 1ll * a[i]);
            max_res = max(max_cur, max_res);
        }
        cout << max_res << endl;
    }
    return 0;
}