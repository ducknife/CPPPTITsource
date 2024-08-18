#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int L, R, a, b;
        cin >> L >> R >> a >> b;
        int cnt = 0;
        for (int i = L; i <= R; i++){
            if (i % a == 0 || i % b == 0) cnt++;
        }
        cout << cnt << endl;
    }
}