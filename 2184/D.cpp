#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

int fact (int n){
    int ans = 1;
    forn (n+1){
        ans = ans * i;
    }
    return n;
}

void solve(){
    int n, k; cin >> n >> k;
    string binary;
    while (n > 0){
        if (n % 2 == 0){
            binary = "0" + binary;
            n = n/2;
        }
        else {
            binary = "1" + binary;
            n = (n - 1) / 2;
        }
    }
    int ans = 0;
    for (int i = 0; i < binary.size(); i++){
        if (binary[i] == '1'){
            
        }
    }
    cout << binary << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    int n = fact(5);
    cout << n;
    forn (t){
        solve();
    }

    return 0;
}