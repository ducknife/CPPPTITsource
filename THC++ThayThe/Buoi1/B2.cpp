/* Cham diem trac nghiem */
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
string A = "ABBADCCABDCCABD";
string B = "ACCABCDDBBCDDBB";
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int id; cin >> id;
        vector<char> a(15);
        for (char &x : a) cin >> x;
        double res = 0;
        if (id == 101){
            for (int i = 0; i < 15; i++){
                if (a[i] == A[i]) res += 10.0/15;
            } 
        }
        else {
            for (int i = 0; i < 15; i++){
                if (a[i] == B[i]) res += 10.0/15;
            }
        }
        cout << fixed << setprecision(2) << res << endl;
    }
    return 0;
}