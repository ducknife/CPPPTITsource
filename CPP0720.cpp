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
        int l[n], r[n];
        for (int i = 0; i < n; i++){
            l[i] = 1;
            for (int j = 0; j < i; j++){
                if (a[i] > a[j]) l[i] = max(l[i], l[j] + 1);
            }
        }
        for (int i = n - 1; i >= 0; i--){
            r[i] = 1;
            for (int j = n - 1; j > i; j--){
                if (a[i] > a[j]) r[i] = max(r[i], r[j] + 1);
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++){
            res = max(res, l[i] + r[i] - 1);
        }
        cout << res << endl;
    }
    return 0;
}