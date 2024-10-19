#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n]; for (int &x : a) cin >> x;
        sort(a, a + n);
        cout << a[k - 1] << endl;
    }
    return 0;
}