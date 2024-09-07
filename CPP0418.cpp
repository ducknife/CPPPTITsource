#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        map<int, int>a;
        set<int>Union, Intersec;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            Union.insert(x);
            a[x] = 1;
        }
        for (int i = 0; i < m; i++){
            int x; cin >> x;
            Union.insert(x);
            if (a[x] == 1) Intersec.insert(x);
        }
        for (int i : Union) cout << i << ' ';
        cout << endl;
        for (int i : Intersec) cout << i << ' ';
        cout << endl;
    }
}