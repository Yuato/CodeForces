//solved
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve() {
    int n; cin >> n;
    long long arr [n];
    pll sumarr[n];
    long long msum = 0, ssum = 0;

    long long a;  
    cin >> a;
    sumarr[0] = pair(a,a);

    arr[0] = a;
    for (int i = 1; i < n; i++){
        cin >> a;
        arr[i] = a;
        if (a + sumarr[i-1].first >  a - sumarr[i-1].first){
            msum = a + sumarr[i-1].first;
        }
        else {
            msum = a - sumarr[i-1].first;
        }
        if (a - sumarr[i-1].second <  a + sumarr[i-1].second){
            ssum = a - sumarr[i-1].second;
        }
        else {
            ssum = a + sumarr[i-1].second;
        }
        sumarr[i] = pair(msum + sumarr[i-1].first, ssum + sumarr[i-1].second);
    }

    long long m = arr[0];
    for (int i = 1; i < n; i++){
        if (m < max(arr[i] + sumarr[i-1].first, arr[i] - sumarr[i-1].second)){
            m = max(arr[i] + sumarr[i-1].first, arr[i] - sumarr[i-1].second);
        }
    }

    cout << m << '\n';

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