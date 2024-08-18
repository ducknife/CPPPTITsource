#include <iostream>
#include <cmath>
using namespace std;
int prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
void divide(int n){
    for (int i = 3; i <= sqrt(n); i++){
        if (n % i == 0){
            cout << i << " ";
            break;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            if (i == 1) cout << "1 ";
            else if (i % 2 == 0) cout << "2 ";
            else if (prime(i)) cout << i << " ";
            else divide(i);
        }
        cout << endl;
    }
}