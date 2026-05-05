#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v;

    int a;
    forn (n) {
        cin >> a;
        v.push_back(a);
    }
    int m = v[0];
    long long ans = 0;

    for (int i = 1; i < n; i++){
        if (v[i] > m){
            m = v[i];
        }
        if ((i + 1) % 2){
            while (v[i - 1] <= v[i]){
                v[i] -= 1;
                ans++;
            }
        }
        else if ((i + 1) % 2 == 0){
            v[i] = m;
            while (v[i - 1] >= v[i]){
                v[i - 1] -= 1;
                ans ++;
            }
        }
    }
    cout << ans << '\n';
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