#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

// Ashish Bairwa

void solve() {
	int n;
	cin>>n;
	vector<int> v(n);
	vector<int> s(n+1, 0);
	for(int i = 0; i<n; i++){
		cin>>v[i];
		s[v[i]]++;
	}
	int score = 0;
	for(int i = 1 ; i<=n; i++){
		score += s[i] / 2;
	}
	cout<<score<<"\n";
	


}

int main() {
	  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

