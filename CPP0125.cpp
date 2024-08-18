#include <iostream>
#define maxN 1000005
using namespace std;
int prime[maxN];
void Isprime(){
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
    Isprime();
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = a; i <= b; i++){
        if (prime[i]) cout << i << " ";
    }
    return 0;
}