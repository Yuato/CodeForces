#include <bits/stdc++.h>

/*

*/

using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    vector<int>v (n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    priority_queue<int>pq;

    long long ans = 0, min = 0, max = v[m-1];
    for (int i = 0; i< m-1; i++){
        pq.push(v[i]);
        min += v[i];
    }
    ans = m*max - min;

    int a;
    for (int i = m - 1; i < n-1; i++){
      if (m > 1){
        a = pq.top();
          if (a > v[i]){
          min -= a;
          min += v[i];
          pq.pop();
          pq.push(v[i]);
        }
      }
      max = v[i+1];
      if (ans < (m*max - min)) ans = m*max - min;
    }
    cout << ans << '\n';
}

int main() {
  int t; cin >> t;
  
  while (t) {
    solve();
    t--;
  }
}