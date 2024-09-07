#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int k, n; cin >> k >> n;
        multiset<int>se;
        for (int i = 0; i < k; i++){
            for (int j = 0; j < n; j++){
                int x; cin >> x;
                se.insert(x);
            }
        }
        for (int i : se) cout << i << " ";
        cout << endl;
    }
}