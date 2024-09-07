#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int>mp;
        vector<int>res;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
            if (mp[x] >= 2) res.push_back(x);
        }
        if (res.empty()) cout << -1 << endl;
        else cout << res.front() << endl;
    }
}