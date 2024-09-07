#include <bits/stdc++.h>
#define ll long long
//ky thuat 3 con tro
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        ll a[n], b[m], c[k];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < k; i++) cin >> c[i];
        int i = 0, j = 0, t = 0;
        vector<ll>res;
        while (i < n && j < m && t < k){
            if (a[i] == b[j] && b[j] == c[t]){
                res.push_back(a[i]);
                i++; j++; k++;
            }
            else if (a[i] < b[j]) ++i;
            else if (b[j] < c[t]) ++j;
            else ++t;
        }
        if (res.empty()) cout << -1 << endl;
        else {
            for (auto i : res) cout << i << " ";
            cout << endl;
        }
    }
}