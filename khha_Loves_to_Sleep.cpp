#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, k, x; cin >> n >> k >> x;
    int a;
    vector <int> v;
    map <int, bool> m;
    forn (n){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    priority_queue<pair<int,pii>>pq;

    pq.push(pair(v[0], pair(0, 1)));
    int d = 0;
    for (int i = 1; i < n; i++) {
        d = (v[i]-v[i-1])/2;
        if ((v[i]-v[i-1])%2==1){
            pq.push(pair(d, pair(v[i]-d, 1)));
            pq.push(pair(d, pair(v[i-1]+d, -1)));
        }
        else{
            pq.push(pair(d, pair(v[i]-d, 0)));
        }
    }
    pq.push(pair(x-v[v.size()-1],pair(x,-1)));    

    pair<int, pii> node;
    pii point;
    while (k > 0){
        node = pq.top();
        pq.pop();
        point = node.second;
        d = node.first;
        if (d > 0){
            if (point.second == 0){
                pq.push(pair(d-1,pair(point.first+1, 1)));
                pq.push(pair(d-1,pair(point.first-1, -1)));
            }
            else {
                pq.push(pair(d-1,pair(point.first+point.second,point.second)));
            }
        }
        if (m[point.first] == false){
            m[point.first] = true;
            cout << point.first << ' ';
            k--;
        }
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