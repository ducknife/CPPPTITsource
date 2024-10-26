#include <bits/stdc++.h>
using namespace std;
void ktao(int b[], int n){
    for (int i = 1; i <= n; i++) b[i] = 0;
}
void sinh(int b[], int n, int &ok){
    int i = n;
    while (i >= 1 && b[i] == 1){
        b[i] = 0;
        i--;
    }
    if (i == 0) ok = 0;
    else b[i] = 1;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int b[100];
        ktao(b, n);
        int ok = 1;
        while (ok){
            for (int i = 1; i <= n; i++) cout << b[i];
            cout << " ";
            sinh(b, n, ok);
        }
        cout << endl;
    }
}