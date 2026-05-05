#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    map<int,int>m;
    int a;
    int arr [n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        m[arr[i]] = i+1;
    }
    int ans = 0;
    forn (n) {
        if (arr[i] <= i+1){
            ans += 1;
        }
    }
    cout << ans <<'\n';
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