#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<ll, int>mp;
        for (int i = 0; i < n; i++){
            ll x; cin >> x;
            if (x > 0 && x < n) mp[x] = x;
            else mp[x] = -1;
        }
        if (mp[0] == -1) mp[0] = 0;//neu 0 xuat hien;
        else mp[0] = -1;
        for (int i = 0; i < n; i++){
            if (mp[i] != i) mp[i] = -1;
            cout << mp[i] << ' ';
        }
        if (t > 0) cout << endl;
    }
}