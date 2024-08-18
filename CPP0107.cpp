#include <bits/stdc++.h>
using namespace std;
string b = "ABBADCCABDCCABD";
string c = "ACCABCDDBBCDDBB";
int main(){
    int t;
    cin >> t;
    while (t--){
        int id, correct = 0;
        cin >> id;
        vector<char>a(15);
        for (int i = 0; i < 15; i++) cin >> a[i];
        if (id == 101) {
            for (int i = 0; i < 15; i++){
                if (a[i] == b[i]) correct++;
            }
        }
        else {
            for (int i = 0; i < 15; i++){
                if (a[i] == c[i]) correct++;
            }
        }
        cout << fixed << setprecision(2) << 1.0 * correct * 10/15 << endl;
    }
}