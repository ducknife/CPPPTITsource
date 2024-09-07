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
        int a[n]; for (int &x : a) cin >> x;
        int F[n];
        for (int i = 0; i < n; i++){
            F[i] = 1;
            for (int j = 0; j < i; j++){
                if (a[i] > a[j]){
                    F[i] = max(F[i], F[j] + 1);
                }
            }
        }
        sort(F, F + n);
        cout << F[n - 1] << endl;
    }
    return 0;
}