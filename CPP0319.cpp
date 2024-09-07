#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, s; cin >> m >> s;
    if (s > 9 * m || s == 0 && m > 1){
        cout << "-1 -1";
        return 0;
    }
    int min[m], max[m];
    int tmp = s;
    for (int i = 0; i < m; i++){
        if (s > 9){
            max[i] = 9;
            s -= 9;
        }
        else {
            max[i] = s;
            s = 0;
        }
    }
    tmp--;
    for (int i = m - 1; i >= 0; i--){
        if (tmp > 9){
            min[i] = 9;
            tmp -= 9;
        }
        else {
            min[i] = tmp;
            tmp = 0;
        }
    }
    min[0] += 1;
    for (int i : min) cout << i;
    cout << " ";
    for (int i : max) cout << i;
}