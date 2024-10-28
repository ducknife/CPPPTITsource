#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int  main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n], b[n];
		map<int, int>mp;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for (int i = 0; i < n; i++){
			if (a[i] != b[n - 1]) mp[a[i]] = *upper_bound(b, b + n, a[i]);
		}
		for(int i = 0; i < n; i++){
			if (mp[a[i]] != 0) cout << mp[a[i]] << ' ';
			else cout << '_' << ' ';
		}
		cout << endl;
	}
}
