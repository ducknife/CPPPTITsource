#include <bits/stdc++.h>
int a[15] = {4, 20, 38, 50, 38, 20, 8, 5, 0};
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << a[n - 1] << endl;
    }
    return 0;
}