#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>a(n), b, save;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b.push_back(a[i]);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++){
            if (b[i] != a[i]){
                save.push_back(i + 1);
            }
        }
        cout << save.front() << " " << save.back() << endl;
    }
}