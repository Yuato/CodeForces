#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

#define MOD 998244353


using namespace std;


void solve(){


    
    
}

int main() {
    long long sum = 1;
    for (int i = 0; i < 1000000000; i++){
        sum *= 2;
        sum = sum % MOD;
    }
    cout << sum;
    return 0;
}