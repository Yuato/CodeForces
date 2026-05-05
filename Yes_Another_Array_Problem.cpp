#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

int gcd (int a, int b){
    if (b == 0) return a;
    else return (gcd(b,a%b));
}

void solve(){
    long long n; cin >> n;
    long long a;
    vector <long long> v;
    forn (n){
        cin >> a;
        v.push_back(a);
    }

    long long ans = 1;
    bool f = false;
    while (true){
        ans++;
        forn (n){
            if (gcd(ans, v[i]) == 1){
                f = true;
                break;
            }
        }
        if (f) break;
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