#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int r, g, b; cin >> r >> g >> b;
    int cr, cg, cb; cin >> cr >> cg>> cb;
    int crg, cgb; cin >> crg >> cgb;

    r = r - cr;
    b = b - cb;
    g = g - cg;
    if (g < 0) g = 0;
    if (r < 0) r = 0;
    if (b < 0) b = 0;

    if (r > 0){
        crg -= r;
    }
    if (b > 0){
        cgb -= b;
    }
    if (crg >= 0 && cgb >= 0 && g <= crg + cgb){
        cout << r + b + g;
    }
    else cout << -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    forn (t){
        solve();
    }

    return 0;
}