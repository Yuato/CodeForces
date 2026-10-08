#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>



using namespace std;


void solve(){
    int n, x, y, z; cin >> n >> x >> y >>z;
    int ai = z, nai = 0;
    if ((n)%(x+y) > 0){
        nai = 1;
    }
    nai += (n)/(x+y);

    if ((n-x*z)%(x+10*y) > 0){
        ai += 1;
    }
    ai += (n-x*z)/(x+10*y);


    int ans = (nai > ai) ? ai : nai;
    cout << ans;
    cout << '\n';
    
    
    
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