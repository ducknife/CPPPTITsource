#include <iostream>
#include <cmath>
#include <map>
using namespace std;
void divide(int n){
    int tmp = n;
    map<int, int>a;
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            a[i]++;
            n /= i;
        }
    }
    if (n > 1) a[n]++;
    for (auto i : a){
        cout << i.first << " " << i.second << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        divide(n);
    }
    return 0;
}