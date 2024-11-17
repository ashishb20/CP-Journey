#include<bits/stdc++.h>
using namespace std;

// Ashish Bairwa
vector<int> gen_perm(int n) {
    if (n <= 4) return {}; 

    vector<int> evens, odds;
    for (int i = 1; i <= n; ++i) {
        if (i == 4) continue; 
        if (i == 5) continue; 
        if (i % 2 == 0) {
            evens.push_back(i);
        } else {
            odds.push_back(i);
        }
    }

    odds.insert(odds.begin(), 5);
    evens.push_back(4);
    vector<int> permutation;
    permutation.insert(permutation.end(), evens.begin(), evens.end());
    permutation.insert(permutation.end(), odds.begin(), odds.end());

    
    for (int i = 0; i < n - 1; ++i) {
        int sum = permutation[i] + permutation[i + 1];
        if (sum <= 3 || (sum % 2 != 0 && sum % 3 != 0)) { 
            return {}; 
        }
    }

    return permutation;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> result = gen_perm(n);
        if (result.empty()) {
            cout << -1 << endl; 
        } else {
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
