#include <iostream>
#include <cmath>
#define maxN 1000005
#define ll long long
using namespace std;
int prime[maxN];
void seive(){
    prime[0] = prime[1] = 0;
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
    seive();
    int t;
    cin >> t;
    while (t--){
        ll L, R;
        cin >> L >> R;
        int cnt = 0;
        for (int i = ceil(sqrt(L)); i <= sqrt(R); i++){
            if (prime[i]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}