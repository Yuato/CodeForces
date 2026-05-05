#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long x; cin >> x;
    long long store = x;
    long long n, p = 999999999;

    bool poss = true;
    if (x % 9 == 0){
        while (store > 0){
            while (p > store){
                p /= 10;
            }
            if (store/p >= 10){
                poss = false;
                break;
            }
            store -= p*(store/p);
        }
        if (poss) cout << 10;
        else cout << 0;
    }
    else{
        cout << 0;
    }
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