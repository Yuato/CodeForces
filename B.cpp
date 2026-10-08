#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

#define MOD = 998244353


using namespace std;


void solve(){
    long long n, m, r, c; cin >> n >> m >> r >> c;
    long long ans = 1;
    if (r % 2 == 0 && c % 2 == 0){
        for (int i = 0; i < n-r+1; ++i){
            ans *= 2
        }
    }
    else if (r%2 != 0 && c % 2 != 0){

    }
    else if (r % 2 == 1 && c % 2 == 0){

    }
    else if (r%2 == 0 && c % 2 == 0)
    


    
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    forn (t){
        solve();
    }

    return 0;
}