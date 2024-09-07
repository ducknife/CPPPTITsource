#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        multiset<int>a;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; i++){
            int x; cin >> x;
            a.insert(x);
        }
        for (int i : a) cout << i << " ";
        cout << endl;
    }
}