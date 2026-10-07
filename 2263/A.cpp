#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>


using namespace std;


void solve(){
    int n; cin >> n;
    int one = 0, zero = 0;
    int a;
    forn (n){
        cin >> a;
        if (a){
            one ++;
        }
        else{
            zero++;
        }
    }
    if (one >= zero){
        cout << "Bessie";
    }
    else cout << "Elsie";
    cout << "\n";
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