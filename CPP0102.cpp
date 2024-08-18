#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int test;
    cin >> test;
    while (test--){
        char c;
        cin >> c;
        if (c >= 'a' && c <= 'z') c = toupper(c);
        else c = tolower(c);
        cout << c << endl;
    }
    return 0;
}