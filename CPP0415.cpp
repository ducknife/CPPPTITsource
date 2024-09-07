#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector<ll>a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << 1ll * a[n - 1] * b[0] << endl;
    }
}