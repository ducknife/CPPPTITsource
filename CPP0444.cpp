#include <bits/stdc++.h>
using namespace std;
//Linear Search
int main(){
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        int a[n], ok = 0, mid;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++){
            if (a[i] > a[i + 1]){
                ok = 1;
                mid = i;
                if (a[mid] == x) {
                    cout << mid + 1 << endl;
                    break;
                }
                else break;
            }
        }
        if (ok){
            bool check = false;
            for (int i = 0; i < mid; i++){
                if (a[i] == x) {
                    cout << i + 1 << endl;
                    check = true;
                }
            }
            if (!check){
                for (int i = mid + 1; i < n; i++){
                    if (a[i] == x) cout << i + 1 << endl;
                }
            }
        }
        else {
            for (int i = 0; i < n; i++){
                if (a[i] == x) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
}