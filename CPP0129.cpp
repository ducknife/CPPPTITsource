#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int N, p, x = 0;
        cin >> N >> p;
        for (int i = p; i <= N; i+=p){
            int tmp = i;
            while (tmp % p == 0){
                x++;
                tmp /= p;
            }
        }
        cout << x << endl;
    }
    return 0;
}