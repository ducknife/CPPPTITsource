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
        int a[n + 1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        ll sum[n + 1] = {0};
        sum[1] = 1ll * a[1];
        for (int i = 2; i <= n; i++){
            sum[i] = max(sum[i - 1], sum[i - 2] + 1ll * a[i]);
        }
        cout << sum[n] << endl;
    }
    return 0;
}