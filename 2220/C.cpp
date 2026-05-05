#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long p, q; cin >> p >> q;
    long long tot = p + q*2;
    bool ans = false;
    long long sub = 4, mod = 3;
    long long width,height;
    while (!ans && ((sub-4)/3 <= ((tot-sub)/mod))){
        if ((tot - sub)%mod == 0){
            width = (sub-4)/3 + 1;
            height = (tot-sub)/mod + 1;

            if (abs(width-height)<=p){
                ans = true;
                break;
            }
        }
        sub += 3;
        mod += 2;
    }
    if (ans)
    cout << height << " " << width;
    else cout << -1;
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