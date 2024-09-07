#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n][n];
        vector<int>b;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                b.push_back(a[i][j]);
            }
        }
        sort(b.begin(), b.end());
        cout << b[k - 1];
        if (t > 0) cout << endl;
    }
}