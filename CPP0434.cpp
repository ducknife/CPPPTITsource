#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<ll>v(n), tmp(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            tmp[i] = v[i];
        }
        v[0] = v[0] * v[1];
        v[n - 1] = v[n - 1] * v[n - 2];
        for (int i = 1; i < n - 1; i++){
            v[i] = tmp[i - 1] * tmp[i + 1];
        }
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
}