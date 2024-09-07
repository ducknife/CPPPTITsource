#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string num; cin >> num;
        int sumodd = 0, sumeven = 0;
        for (int i = 0; i < num.size(); i++){
            if (i % 2 == 0) sumeven += num[i] - '0';
            else sumodd += num[i] - '0';
        }
        if (abs(sumodd - sumeven) % 11 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
}