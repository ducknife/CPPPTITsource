#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int k, x; cin >> k >> x;
        int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
        int left = pos - k / 2, right = pos + k / 2;
        for (int i = left; i < pos; i++) cout << a[i] << " ";
        for (int i = pos + 1; i <= right; i++) cout << a[i] << " ";
        cout << endl;
    }
}