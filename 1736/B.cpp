#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

void solve(){
    int n; cin >> n;
    int a; 
    vector <int> v;
    forn(n) {
        cin >> a;
        v.push_back(a);
    }

    bool poss = true;
    for (int i = 0; i < n; i++){
        int g = gcd(v[i], v[i+2]);
        if (i+2 < n && v[i+1] < (v[i+1]*g)/gcd(v[i+1],g)) poss = false;
    }

    if (poss) cout << "YES";
    else cout << "NO";
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