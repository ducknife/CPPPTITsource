#include <bits/stdc++.h>
using namespace std;
#define maxN 1000005
int fre[maxN];
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        memset(fre, 0, sizeof(fre));
        int a[n], max_val = -1e9; 
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] > 0) fre[a[i]]++;
            max_val = max(max_val, a[i]);
        }
        for (int i = 1; i <= max_val + 1; i++){
            if (fre[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }
}