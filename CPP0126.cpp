#include <iostream>
#define maxN 10005
using namespace std;
int prime[maxN];
void Isprime(){
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
    Isprime();
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++){
            if (prime[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}