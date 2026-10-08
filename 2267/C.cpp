#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

bool prime [x+10];

for (int i = 2; i <= x; i++){
    prime[i] = true;
}

for (int i = 2; i <= x; i++){
    if (prime[i]){
        for (int j = 2; j < x/i; j++){
            prime[j*i] = false;
        }      
    }

long long gcd (long a, long b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

void solve(){
    long long n, x; cin >> n >> x;

    vector<long long>v;


    forn (n){
        long long a; cin >> a;
        v.push_back(a);
    }


    map<long long,long long>ans;
    vector<long long>ps;

    int xs = x;
    for (int i = 2; i <= sqrt(x)+1; i++){
        if (xs % i == 0){
            while (xs % i == 0){
                xs /= i;
            }
            ps.push_back(i);
        }
    }

    if (x > 1) ps.push_back(x);

    forn (v.size()) {
        for (int j = 0; j < ps.size(); j++){
            if (v[i]%ps[j] == 0){
                cout<<ps[j];
                ans[ps[j]] += v[i];
            }
        }
    }

    long long val = 0;
    forn (ps.size()){
        if (val < ans[ps[i]]){
            val = ans[ps[i]];
        }
    }

    cout << val << "\n";

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