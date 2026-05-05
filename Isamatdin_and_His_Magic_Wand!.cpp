#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    int a;
    bool even = false, odd = false;
    vector <int> v;
    forn (n){
        cin >> a;
        if (a%2 == 0){
            even = true;
        }
        else odd = true;
        v.push_back(a);
    }

    if (even && odd){
        sort(v.begin(), v.end());
    }

    forn (n){
        cout << v[i] << " ";
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