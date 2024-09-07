#include <iostream>
using namespace std;
int a[100001];
int main(){
    int n, k, b; cin >> n >> k >> b;
    for (int i = 0; i < b; i++){
        int x; cin >> x;
        a[x] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= k; i++){
        if (a[i] == 1) cnt++;
    }
    int res = cnt;
    for (int i = 1; i <= n - k; i++){
        cnt = cnt - a[i] + a[i + k];
        res = min(res, cnt);
    }
    cout << res << endl;
}