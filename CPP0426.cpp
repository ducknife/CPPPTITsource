#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int>v;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int l = 0, r = v.size() - 1;
        while (l <= r){
            if (l == r) cout << v[l] << " ";
            else {
                cout << v[r] << " " << v[l] << " ";
            }
            l++; r--;
        }
        cout << endl;
    }
}