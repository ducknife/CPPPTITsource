#include <iostream>
#include <cmath>
using namespace std;
#define maxN 10005
int prime[maxN];
void IsPrime(){
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= maxN; i++) prime[i] = 1;
    for (int i = 2; i * i <= maxN; i++){
        if (prime[i]){
            for (int j = i * i; j <= maxN; j+=i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    IsPrime();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 2; i <= n; i++){
            if (prime[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
