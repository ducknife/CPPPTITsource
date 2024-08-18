#include <iostream>
#include <cmath>
using namespace std;
void divisor(int n){
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            if (i % 2 == 0) cnt++;
            if (n/i != i && n/i % 2 == 0) cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        divisor(n);
    }
}