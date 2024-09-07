#include <bits/stdc++.h>
using namespace std;
int res = 0;
void solve(string s){
	res = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'){
			s.erase(i, 3);
			res += 3;
			i = -1;
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
        string s; cin >> s;
		solve(s);
		cout << res << endl;
	}
}