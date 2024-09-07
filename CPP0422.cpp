#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<long long>v;
        for (int i = 0; i < n; i++){
            long long x; cin >> x;
            if (x != 0) v.push_back(x);
        }
        for (int i = 0; i < n; i++){
            if (i < v.size()) cout << v[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}