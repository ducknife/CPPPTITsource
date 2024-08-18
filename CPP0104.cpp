#include <iostream>
using namespace std;
long long factorial(int n){
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;    
}
int main(){
    int n;
    cin >> n;
    long long sum_factorial = 0;
    for (int i = 1; i <= n; i++) sum_factorial += factorial(i);
    cout << sum_factorial;
    return 0;
}