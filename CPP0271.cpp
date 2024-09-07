#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int pre[1001][1001], a[1001][1001], n, m, l;
void pref(){
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        cin >> m >> n >> l;
        for (int i = 1; i <= m; i++){
            for (int j = 1; j <= n; j++) cin >> a[i][j];
        }
        pref();
        for (int i = l; i <= m; i++){
            for (int j = l; j <= n; j++) cout << (pre[i][j] - pre[i - l][j] - pre[i][j - l] + pre[i - l][j - l]) / l / l << " ";
            cout << endl;
        }
        memset(pre, 0, sizeof(pre));
    }
}