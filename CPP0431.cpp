#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n];
        ll cnt = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i++){
            int value = a[i] + k;
            int last = lower_bound(a + i + 1, a + n, value) - a;
            int last_p = last - 1;
            int first_p = i + 1;
            cnt += 1ll * (last_p - first_p + 1);
        }
        cout << cnt << endl;
    }
}