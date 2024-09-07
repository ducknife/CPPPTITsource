#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int>a;
        for (int i = 1; i <= n; i++){
            int x; cin >> x;
            a[x]++;
        }
        int cnt = 0;
        for (auto i : a){
            if (i.second > 1){
                cnt += 1ll * i.second;
            }
        }
        cout << cnt << endl;
    }
}