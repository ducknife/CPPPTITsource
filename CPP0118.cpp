#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int>mp;
        for (int i = 2; i <= sqrt(n); i++){
            while (n % i == 0){
                mp[i]++;
                n /= i;
            }
        }
        if (n > 1) mp[n]++;
        if (mp.size() == 3){
            bool ok = true;
            for (auto i : mp){
                if (i.second != 1){
                    ok = false;
                    cout << 0 << endl;
                    break;
                }
            }
            if (ok) cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
}