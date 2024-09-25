#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string a[n];
    for (string &x : a) cin >> x;
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j && a[i].find(a[j]) != string::npos) res++;
        }
    }
    cout << res << endl;
    return 0;
}