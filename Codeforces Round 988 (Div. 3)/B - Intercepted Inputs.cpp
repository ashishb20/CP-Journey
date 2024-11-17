#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

//  Ashish Bairwa

void solve(int k, const vector<int>& nums) {
    int target = k - 2; 
    unordered_set<int> seen;

    for (int num : nums) {
        if (num == 0) continue;
        if (target % num == 0) { 
            int complement = target / num;
            if (seen.count(complement)) {
                cout << num << " " << complement << endl;
                return;
            }
        }
        seen.insert(num);
    }

}
int main() {
	  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t; 
    cin >> t;

    while (t--) {
    int k; 
    cin >> k;

    vector<int> nums(k);
    for (int i = 0; i < k; ++i) {
        cin >> nums[i];
    }

    solve(k, nums);
    }

    return 0;
}
