#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for (auto i : se) cout << i << " ";
    return 0;
}