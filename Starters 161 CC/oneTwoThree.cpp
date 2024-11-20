#include <bits/stdc++.h>
using namespace std;

//  Ashish Bairwa

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        bool modif = true;
        while(modif){
        	modif = false;
        	for(int i = 1; i<N-1; i++){
        		if(A[i-1] + A[i+1] == 4){
        			if(A[i] == 3){
        				A[i] = 1;
        				modif = true;
        			}
        		}
        	}
        }

        long long sum = accumulate(A.begin(), A.end(), 0);

        cout << sum <<"\n";
    }

    return 0;
}
