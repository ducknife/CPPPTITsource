#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if (binary_search(a, a + n, x)) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}