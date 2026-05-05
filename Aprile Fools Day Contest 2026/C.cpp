#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int sum = a+b+c;
    cout << sum/3 + sum%3 << '\n';
}

int main() {
    int t; cin >> t;
    forn (t){
        solve();
    }
}