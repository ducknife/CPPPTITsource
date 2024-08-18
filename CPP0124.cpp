#include <iostream>
#include <cmath>
using namespace std;
void divide(int n){
    for (int i = 2; i <= sqrt(n); i++){
        int s = 0;
        while (n % i == 0){
            s++;
            n /= i;
        }
        if (s >= 1) cout << i << " " << s << endl;
    }
    if (n > 1) cout << n << " " << "1";
}
int main(){
    int n;
    cin >> n;
    divide(n);
    return 0;
}