#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        double a[1005];
        for (int i = 1; i <= n; i++) cin >> a[i];
        int av = 0;
        for (int i = 1; i <= k; i++) av += a[i];
        int res = av, pos;
        for (int i = k + 1; i <= n; i++){
            av = av + a[i] - a[i - k];
            if (av > res){
                res = av;
                pos = i - k;
            }
        }
        for (int i = 1; i <= k; i++) cout << a[i + pos] << " ";
        cout << endl;
    }
}