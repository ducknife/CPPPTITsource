#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char a[25][25];
int n, m;
void Try(int i, int j){
    a[i][j] = '*';
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 'O'){
            Try(i1, j1);
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) cin >> a[i][j];
        }
        for (int i = 0; i < n; i++){
            if (a[i][0] == 'O') Try(i, 0);
            if (a[i][m - 1] == 'O') Try(i, m - 1);
        }
        for (int i = 0; i < m; i++){
            if (a[0][i] == 'O') Try(0, i);
            if (a[n - 1][i] == 'O') Try(n - 1, i);
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == '*') cout << 'O' << " ";
                else cout << 'X' << " ";
            }
            cout << endl;
        }
    }
}
