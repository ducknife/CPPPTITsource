#include <bits/stdc++.h>
using namespace std;
void init(int a[], int n){
    for (int i = 1; i <= n; i++) a[i] = i;
}
void Gen(int a[], int n, int &ok){
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if (i == 0) ok = 0;
    else {
        int j = n;
        while (a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[100];
        int ok = 1;
        init(a, n);
        while (ok){
            for (int i = 1; i <= n; i++) cout << a[i];
            cout << " ";
            Gen(a, n, ok);
        }
        cout << endl;
    }
}