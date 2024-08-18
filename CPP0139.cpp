#include <iostream>
#include <cmath>
using namespace std;
int prime(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
int sumofdigit(int n){
    int sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int divide(int n){
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            sum += sumofdigit(i);
            n /= i;
        }
    }
    if (n > 1) sum += sumofdigit(n);
    return sum;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (divide(n) == sumofdigit(n) && !prime(n))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}