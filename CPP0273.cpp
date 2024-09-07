#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n], pre[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        pre[0] = a[0];
        for (int i = 1; i < n; i++){
            pre[i] = pre[i - 1] + a[i];
        }
        int ok = 0;
        for (int i = 1; i < n; i++){
            if (pre[i - 1] == pre[n - 1] - pre[i]){
                ok = 1;
                cout << i + 1 << endl;
                break;
            }
        }
        if (!ok) cout << -1 << endl;
    }
}