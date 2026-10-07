#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>


using namespace std;


void solve(){
    int n, k; cin >> n >> k;
    if (k < n || 2*n <= k){
        cout << -1 << '\n';
    }
    else{
        int arr [n][n];
        forn (n){
            for (int j = 0; j < n; j++){
                arr[i][j] = i*n + j + 1;
            }
        }
        forn(2*n - k - 1) { 
            arr[0][i+1] = arr[i+1][i+1];
            arr[i+1][i+1] = 2 + i;
        }
        forn (n){
            for (int j = 0; j < n; j++){
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>>t;
    forn (t){
        solve();
    }

    return 0;
}