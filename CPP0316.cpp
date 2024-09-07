#include <bits/stdc++.h>
using namespace std;
int LckySum(string s){
    int sum = 0;
    for (char i : s) sum += i - '0';
    return sum;
}
int main(){
    int t; cin >> t;
    while (t--){
        string num; cin >> num;
        int res = LckySum(num);
        while (res > 9){
            res = LckySum(to_string(res));
        }
        if (res == 9) cout << 1 << endl;
        else cout << 0 << endl;
    }
}