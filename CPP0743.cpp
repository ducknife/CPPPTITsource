#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int main(){
    stack<string>st;
    int t; cin >> t;
    while (t--){
        string s;
        getline(cin >> ws, s);
        stringstream ss(s);
        string word;
        while (ss >> word){
            st.push(word);
        }
        while (!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        if (t > 0) cout << endl;
    }
}