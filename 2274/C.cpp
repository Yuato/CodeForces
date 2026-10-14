
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

long long calc(int n) {
    long long s = 0;
    for (int i = 1; i <= n; i++){
        s += i * (n/i);
    }
    return s;
}

void solve() {
    int n; cin >> n;


    long long sum = 0;
    int min = 1, max = n, mid = 0;

    while (min < max){
        mid = (min + max)/2;
        sum = calc(mid);
        if (sum >= n){
            max = mid;
        }
        else{
            min = mid + 1;
        }
    }

    map <int,int> m; 
    int c = min, next = 0;
    while (n > 0){
        next = min/c * c;
        if (next <= n){
            m[c] = min / c;
            n -= next;
        }
        else {
            m[c] = n/c;
            n -= n/c * c;
        }
        --c;
    }

    int inx = 1;
    cout << min << '\n';
    forn (min){
        for (int j = 0; j < m[i+1]; j++){
            for (int z = 0; z < i + 1; z++){
                cout << inx << " ";
            }
            inx++;
        }
    }
    cout << '\n';
    
}

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    int t; cin >> t;
    forn (t){
        solve();
    }

    return 0;
}