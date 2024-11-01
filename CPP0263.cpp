#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int a[404][404], n;
int minor[404][404], major[404][404];
void buildMajor(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 || j == 1){
                major[i][j] = a[i][j];
            }
            else {
                major[i][j] = major[i - 1][j - 1] + a[i][j];
            }
        }
    }
}
void buildMinor(){
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= 1; j--){
            if (i == 1 || j == n){
                minor[i][j] = a[i][j];
            }
            else {
                minor[i][j] = minor[i - 1][j + 1] + a[i][j];
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int res = INT_MIN;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            res = max(res, a[i][j]);
        }
    }
    buildMajor();
    buildMinor();
    for (int i = n; i >= 1; i--){
        for (int j = n; j >= 1; j--){
            for (int k = min(i, j); k >= 0; k--){
                res = max(res, major[i][j] - major[i - k][j - k] - minor[i][j - k + 1] + minor[i - k][j + 1]);
            }
        }
    }
    cout << res;
    return 0;
}
