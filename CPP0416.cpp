#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        ll cnt = 0;
        int n, k; cin >> n >> k;
        vector<int>a;
        for (int i = 0; i < n; i++){
            int x; cin >> x; a.push_back(x);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++){
            int value = k - a[i];
            int first_p = lower_bound(a.begin() + i + 1, a.end(), value) - a.begin();
            int last_p = upper_bound(a.begin() + i + 1, a.end(), value) - a.begin();
            cnt += 1ll * (last_p - first_p);
        }
        cout << cnt;
        if (t > 0) cout << endl;
    }
}