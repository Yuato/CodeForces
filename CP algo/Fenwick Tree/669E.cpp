#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

/*
1. Sort all queries by time
2. map time values 1-n
3. T into 
*/

using namespace std;

struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<int> const &a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

void solve(){
    int n; cin >> n;
    long long a, t, x;
    map<long long, multiset<long long>>m;
    multiset<long long>set;
    forn (n) {
        cin >> a >> t >> x;
        if (a == 1){    
            if (m.find(x)==m.end()){
                m[x] = set;
            }
            m[x].insert(t);
        }
        else if (a == 2){   
            if (m.find(x)==m.end()){
                m[-x] = set;
            }
            m[-x].insert(t);
        }
        else{
            int sum = 0;
            sum = distance(m[x].begin(), m[x].lower_bound(t));
            sum -= distance(m[-x].begin(), m[-x].lower_bound(t));
            cout << sum << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    forn (t){
        solve();
    }

    return 0;
}