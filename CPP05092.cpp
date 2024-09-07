#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n - 1; i++){
        for (int j = 1; j <= n + i - 1; j++){
            if (j == n - i + 1 || j == n + i - 1) cout << '*';
            else cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) cout << "* ";
    return 0;
}