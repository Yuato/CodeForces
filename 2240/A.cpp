//Solved
/*
    1. Understand start from base bit will yield the greatest answer
    2. k * smallest bit subtract from n, repeated with bit * 2 after
    3. remainder find number of bits left, then that remainder assume adjustments can compensate
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>


using namespace std;


void solve(){
    int n, k; cin >> n >> k;
    long long pow = 1;
    int sum = 0;
    while (true) {
        if (n-k*pow >= 0){
            n -= (k*pow);
            sum += k;
            pow *= 2;
        }
        else{
            sum += n/pow;
            break;
        }
    }

    cout << sum << '\n';
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