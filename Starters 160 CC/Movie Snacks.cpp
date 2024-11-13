#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  int x, y,z;
	cin>>x>>y>>z;
	cout<< min({2*x+ 3*y, 2*z+y, x + 2*y+ z})<<"\n";

	return 0;

}

