#include<bits/stdc++.h>
using namespace std;

// Ashish Bairwa
void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> A(n);
    vector<int> B(m);
    for(int i = 0; i<n;i++){
        cin>>A[i];
    }
    for(int i = 0; i<m; i++){
        cin>>B[i];
    }
    int cnt = 0;
    unordered_map<int, int> rem;
    for(int i = 0; i<n; i++){
        rem[i+1] = A[i];
    }
    for(int i = 0 ; i<m ; i++){
        int type = B[i];
        if(rem[type] >0){
            rem[type]--;
        }else{
            cnt++;
        }
    }
    cout<<cnt <<"\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
