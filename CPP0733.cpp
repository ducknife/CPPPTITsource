#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int n, m, s, t, u, v;
int a[1005][1005], d[1005][1005];
int dx4[4] = {-1, 0, 0, 1};
int dy4[4] = {0, -1, 1, 0};
void bfs(int i, int j){
    queue<pair<int, int>>q;
    q.push({i, j});
    a[i][j] = 0;
    while (!q.empty()){
        pair<int, int> top = q.front(); q.pop();
        for (int k = 0; k < 4; k++){
            int i1 = top.first + dx4[k];
            int j1 = top.second + dy4[k];
            if (i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= m && a[i1][j1]){
                d[i1][j1] = d[top.first][top.second] + 1;
                if (i1 == u && j1 == v) return;
                q.push({i1, j1});
                a[i1][j1] = 0;
            }
        }
    }
}
void solve(){
    cin >> n >> m >> s >> t >> u >> v;
    s++, t++, u++, v++;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    }
    memset(d, 0, sizeof(d));
    if (a[s][t] && a[u][v]){
        bfs(s, t);
        if (d[u][v]) cout << d[u][v] << endl;
        else cout << -1 << endl;
    }
    else cout << -1 << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
