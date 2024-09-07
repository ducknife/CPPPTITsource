#include <bits/stdc++.h>
using namespace std;
int checkMoutainArraY(vector<int>a, int l, int r){
    int i = l;
    while (a[i] <= a[i + 1] && i < r) i++;
    while (a[i] >= a[i + 1] && i < r) i++;
    if (i != r) return 0;
    return 1;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int l, r; cin >> l >> r;
        if (checkMoutainArraY(a, l, r)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}