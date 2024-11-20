#include <bits/stdc++.h>
using namespace std;

//  Ashish Bairwa

bool canMinimize(const vector<int>& A, int n, int k, int max_diff) {
    int changes = 0;
    int cur_min = A[0] - max_diff;
    int cur_max = A[0] + max_diff;
    for (int i = 1; i < n; ++i) {
        int new_min = max(cur_min, A[i] - max_diff);
        int new_max = min(cur_max, A[i] + max_diff);
        if (new_min > new_max) {
            changes++;
            cur_min = A[i] - max_diff;
            cur_max = A[i] + max_diff;
        } else {
            cur_min = new_min;
            cur_max = new_max;
        }
        if (changes > k) return false;
    }
    return changes <= k;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n>> k;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        int low = 0, high = INT_MAX, result = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canMinimize(A, n, k, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << result <<"\n";
    }
    return 0;
}
