#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long n; cin >> n;
    long long sum = 0;
    if (n == 1){
        sum = -1;
    }
    else{
        sum = -3;
    }
    long long pow = 4;
    while (n >= pow){
        if (pow-2 > pow/2+1){
            sum += (pow-2-pow/2)*((pow-2)+(pow/2+1))/2;
            
        }
        sum -= 1;
        pow*=2;
    }
    if (n > pow/2){
        sum+=(pow/2+1+n)*(n-pow/2)/2;
    }
    cout << sum << '\n';

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