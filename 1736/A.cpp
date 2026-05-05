#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>a;
    vector<int>b;
    int l;
    forn (n) {
        cin >> l;   
        a.push_back(l);
    }

    forn (n) {
        cin >> l;
        b.push_back(l);
    }

    int arr[2] = {0,0};
    forn(n) {
        if (a[i] != b[i]){
            arr[a[i]] += 1;
        }
    }
    int ans = max(arr[0], arr[1]) - min(arr[0], arr[1]);
    if (min(arr[0], arr[1]) > 0){
        ans += 1;
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