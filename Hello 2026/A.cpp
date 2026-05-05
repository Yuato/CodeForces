#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    int arr [n];
    int z = 0;
    forn(n){
        cin >> arr[i];
    }

    bool one = false, zero = false;
    if (arr[0] == 1 || arr[n-1] == 1) one = 1;

    forn (n){
        if (arr[i] == 0){
            zero  = true;
        }
    }
    if ((one and zero) || !zero) cout << "Alice";
    else cout << "Bob";
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