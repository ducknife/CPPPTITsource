#include <bits/stdc++.h>
using namespace std;
int a[100][100], n, k, cnt = 0;
void Try(int i, int j, int sum){
    if (i == n && j == n && sum == k){
        cnt++;
    }
    if (i + 1 <= n){
        Try(i + 1, j, sum + a[i + 1][j]);
    }
    if (j + 1 <= n){
        Try(i, j + 1, sum + a[i][j + 1]);
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        cnt = 0;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++) cin >> a[i][j];
        }
        int sum = a[1][1];
        Try(1, 1, sum);
        cout << cnt << endl;
    }
}