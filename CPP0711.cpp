#include <bits/stdc++.h>
using namespace std;
int b[100];
void khoitao(int n){
    for (int i = 1; i <= n; i++) b[i] = 0;
}
void Sinh(int n, bool &ok){
    int i = n;
    while (i >= 1 && b[i] == 1){
        b[i] = 0;
        --i;
    }
    if (i == 0) ok = false;
    else b[i] = 1;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        khoitao(n);
        bool ok = true;
        while (ok){
            for (int i = 1; i <= n; i++){
                cout << b[i];
            }
            cout << " ";
            Sinh(n, ok);
        }
        cout << endl;
    }
}