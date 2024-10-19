/* #include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int dp[1000005];
//O(n * t); -> tle;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[2] = {2020, 2021};
        if (n < 2020) cout << "NO" << endl;
        else {
            dp[0] = 1;
            for (int i = 0; i < 2; i++){
                for (int j = a[i]; j <= n; j++){
                    if (dp[j - a[i]]) dp[j] = 1;
                }
            }
            if (dp[n]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        memset(dp, 0, sizeof(dp));
    }
    return 0;
} */
/* Cả 2 ý tưởng greedy và dp đều ok nhưng dp thì tle*/
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
        int a = 2020, b = 2021;
        int y = n / b;
        bool founded = false;
        for (int i = y; i >= 0; i--){
            int x = n - i * b;
            if (x % a == 0){
                cout << "YES" << endl;
                founded = true;
                break;
            }
        }
        if (!founded) cout << "NO" << endl;
    }
    return 0;
}