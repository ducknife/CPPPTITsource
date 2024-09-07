#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int>a(n);
        for (int &i : a) cin >> i;
        ll res = 1;
        for (int i = 0; i < n; i++){
            ll tmp = 1;
            for (int j = i; j < n; j++){
                tmp *= 1ll * a[j];
                res = max(res, tmp);
            }
        }
        cout << res << endl;
    }
} 