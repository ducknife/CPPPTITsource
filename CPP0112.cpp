#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        double xa, xb, ya, yb;
        cin >> xa >> ya >> xb >> yb;
        double dis = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));
        cout << fixed << setprecision(4) << dis << endl;
    }
    return 0;
}