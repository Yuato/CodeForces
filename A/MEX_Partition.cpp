//Solved (Checked with CodeForces)
/*
Solution:
Key observations:
    - Partition multisets must include all integers from the original multiset
    - MEX is the integer that does not appear, and a partition is only valid if all multisets have the same MEX
    - Therefore: The minimum possible MEX over all partitions has to be the MEX of the orginal multiset
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; int a;
    map <int, bool> m;
    cin >> n;
    forn (n){
        cin >> a;
        m[a] = true;
    }
    forn (n+1){
        if (!m.count(i)){
            cout << i << '\n';
            break;
        }
    }
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