#include <bits/stdc++.h>
using namespace std;
void init(int a[], int k){
    for (int i = 1; i <= k; i++) a[i] = i;
}
void Gen(int a[], int k, int n, int &ok){
    int i = k;
    while (i >= 1 && a[i] == n - k + i){
        i--;
    }
    if (i == 0) ok = 0;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[100];
        init(a, k);
        int ok = 1;
        while (ok){
            for (int i = 1; i <= k; i++) cout << a[i];
            cout << " ";
            Gen(a, k, n, ok);
        }
        cout << endl;
    }
}