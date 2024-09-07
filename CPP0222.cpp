#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int>mp;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                int x; cin >> x;
                if (mp[x] == i - 1) mp[x] = i;
            }
        }
        int cnt = 0;
        for (auto i : mp){
            if (i.second == n) cnt++;
        }
        cout << cnt << endl;
    }
}