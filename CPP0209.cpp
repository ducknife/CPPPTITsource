#include <bits/stdc++.h>
using namespace std;
int prefix[10005];
void BuildPrefixSum(int a[], int n){
    for (int i = 0; i < n; i++){
        if (i == 0) prefix[i] = a[i];
        else prefix[i] = prefix[i - 1] + a[i];
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        int n, q; cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        BuildPrefixSum(a, n);
        while (q--){
            int l, r; cin >> l >> r;
            l--; r--;
            if (l == 0) cout << prefix[r] << endl;
            else cout << prefix[r] - prefix[l - 1] << endl;
        }
        memset(prefix, 0, n);
    }
}
