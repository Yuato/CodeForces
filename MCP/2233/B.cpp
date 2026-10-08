#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>



using namespace std;


void solve(){
    int n; cin >> n;
    forn (n){
        cout << i+1 << ' ';
    }
    if (n%2){
        forn(n){
            if (i == n/2){
                cout << i+1 << " "<< i+2 << ' ' << i+1 <<  ' '<< i+2 << ' ';
                i++;
            }
            else {
                cout << i+1 <<" " << i+1 << ' ';
            }
        }
    }
    else{
        forn(n){
            cout << i+1 <<" " << i+1 << ' ';
        }
    }
    forn (n){
        cout << i+1;
        if (i + 1 != n) cout << ' ';
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