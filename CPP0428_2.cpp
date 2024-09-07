#include <bits/stdc++.h>
using namespace std;
//2 con tro
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);
        int i = 0, j = 0;
        vector<int>res;
        while (i < n && j < m){
            if (a[i] > b[j]){
                res.push_back(b[j]);
                ++j;
            }
            else {
                res.push_back(a[i]);
                ++i;
            }
        }
        for (int k = i; k < n; k++) res.push_back(a[k]);
        for (int k = j; k < m; k++) res.push_back(b[k]); 
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }
}