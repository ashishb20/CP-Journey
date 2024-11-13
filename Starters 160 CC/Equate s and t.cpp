#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
	int t;
	cin>>t;
	while(t--){

    int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	string t;
	cin>>t;
	int counta_s = 0, countb_s = 0;
    int counta_t = 0, countb_t = 0;
    if(s==t){
        cout<<"YES"<<"\n";
        continue;
    }
    for (char c : s) {
        if (c == 'a') counta_s++;
        else countb_s++;
    }

    for (char c : t) {
        if (c == 'a') counta_t++;
        else countb_t++;
    }
    
    if(counta_t != counta_s){
        cout<<"NO\n";
        continue;
    }
    string s_bfr_a , t_bfr_a;
    for(char c : s){
        if(c == 'a'){
            break;
        }else{
            s_bfr_a += c;
        }
    }
    for(char c : t){
        if(c == 'a'){
            break;
        }else{
            t_bfr_a += c;
        }
    }
    if(s_bfr_a == t_bfr_a){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
	}
	return 0;

}


