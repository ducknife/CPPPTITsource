//https://www.geeksforgeeks.org/gcd-two-numbers-formed-n-repeating-x-y-times/
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a, x, y;
        cin >> a >> x >> y;
        for (int i = 1; i <= __gcd(x, y); i++){
            cout << a;
        }
        cout << endl;
    }
    return 0;     
}