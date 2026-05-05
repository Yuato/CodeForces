#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    set <int> s;
    int a;
    forn (n) {
        cin >> a;
        s.insert(a);
    }
    if (s.size()>=k){
        cout << k;
    }
    else cout << s.size();
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