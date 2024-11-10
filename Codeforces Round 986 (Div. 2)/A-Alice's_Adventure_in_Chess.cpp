// Ashish Bairwa

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    
    for (int i = 0; i < 100; ++i) {
        for (char c : s) {
            if (c == 'N') {
                y += 1;
            } else if (c == 'E') {
                x += 1;
            } else if (c == 'S') {
                y -= 1;
            } else {
                x -= 1;
            }
            if (x == a && y == b) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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


