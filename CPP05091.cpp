#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++){
        if (i <= n){
            for (int j = 1; j <= n + i - 1; j++){
                if (j == n - i + 1 || j == n + i - 1) cout << '*';
                else cout << ' ';
            }
            cout << endl;
        }
        else {
            for (int j = 1; j <= 3 * n - i - 1; j++){
                if (j == i - n + 1 || j == 3 * n - i - 1) cout << '*';
                else cout << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}