#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        int res = 0;
        for (auto i : mp){
            if (i.second > 1){
                res += i.second;
            }
        }
        cout << res << endl;
    }
    return 0;
}