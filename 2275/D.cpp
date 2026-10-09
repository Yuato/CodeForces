//Solved 
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    long long a, b, c;

    priority_queue<pll, std::vector<pll>, std::greater<pll>> pq;

    forn (n) {
        cin >> a >> b >> c;
        if (a == b && c == b){
            pq.push(pair((a + b + c), -1));
        }
        else if (a <= b && b <= c){
            pq.push(pair((a + b + c), min ((c - b + 1),(b - a + 1)))); 
        }
        else{
            pq.push(pair((a + b + c), 0)); 
        }
    }

    bool stuck = false;
    pll node = pq.top();
    pq.pop();

    long long labs = 1;
    long long val = node.first;

    if (node.second == -1){
        stuck = true;
    }
    else if (k >= node.second*2){
        k -= node.second*2;
    }
    else{
        k = 0;
    }
    
    while (!stuck && !pq.empty() && k > 0){
        node = pq.top();
        pq.pop();

        if (k >= (node.first-val)*labs){
            k -= (node.first-val)*labs;
            val = node.first;
        }
        else{
            break;
        }

        if (node.second == -1){
            stuck = true;
            val = node.first;
            break;
        }
        else if (k >= node.second*2){
            k -= node.second*2;
            labs += 1;
        }
        else{
            k = 0;
            break;
        }
    }
    if (stuck){
        cout << val;
    }
    else{
        cout << val + k/labs;
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