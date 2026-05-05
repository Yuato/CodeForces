#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, k, q;
    cin >> n >> k >> q;
    vector <pii> mex;

    int c, l, r;

    int arr[110];
    forn (110){
        arr[i] = -1;
    }

    forn (q){
        cin >> c >> l >> r;
        if (c == 1){
            for (int j = l; j <= r; j++){
                arr[j] = k;
            }
        }
        else {
            mex.push_back(pair(l,r));
        }
    }
    
    for (pii query : mex){
        l = query.first;
        r = query.second;
        for (int i = l; i<=r; i++){
            if (arr[i] >= k){
                arr[i] = k+1;
            } 
        }
    }

    int next = 0;
    for (int i = 1; i <= n; i++){
        if (arr[i] >= k){
            next = 0;
        }
        else{
            arr[i] = next;
            next = (next+1)%k;
        } 
    }

    for (int i = 1; i<=n; i++){
        cout << arr[i] << ' ';
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