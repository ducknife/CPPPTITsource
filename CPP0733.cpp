#include <bits/stdc++.h>
using namespace std;
int n, m, s, t, u, v, ans = 0;
int a[1005][1005];
int cnt;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void Try(int i, int j){
    cnt++;
    a[i][j] = 0;
    if (i == u && j == v){
        ans = min(cnt, ans);
    }
    else {
        for (int k = 0; k < 4; k++){
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 1){
                Try(i1, j1);
            }
        }
    }
}
int main(){
    int T; cin >> T;
    while (T--){
        cin >> n >> m >> s >> t >> u >> v;
        cnt = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) cin >> a[i][j];
        }
        Try(s, t);
        if (a[u][v] == 0) cout << cnt << endl;
    }
}