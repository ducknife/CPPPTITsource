#include <iostream>
using namespace std;
void sum_digit(int n){
    int sum = 0, sum1 = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    if (sum >= 10) sum_digit(sum);
    else cout << sum << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        sum_digit(n);
    }
    return 0;
}
