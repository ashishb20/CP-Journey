#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
	int n,k;
	cin>>n>>k;
	int min_sli = 10 * n;
	int max_sli = 12* n ;
	if(k>= min_sli && k<= max_sli){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
	}

}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;

}
