#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        prev_permutation(v.begin(), v.end());
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
}