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
        int dp[n];
        int a[n]; for (int &x : a) cin >> x;
        for (int i = 0; i < n; i++){
            dp[i] = 1;
            for (int j = 0; j < i; j++){
                if (a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        cout << *max_element(dp, dp + n) << endl;
    }
    return 0;
}