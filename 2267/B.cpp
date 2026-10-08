#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){

    int n; cin >> n;
    vector<int> sol;
    map<int,int> m;

    for (int i = 0; i< n; i++){
        int a; cin >> a;
        if (m.find(a) == m.end()){
            m[a] = 1;
            sol.push_back(a);
        }
        else{
            m[a]++;
        }
    }

    sort(sol.begin(), sol.end());
    
    while(n > 0){
        for (int i = 0; i < sol.size(); i++){
            if (m[sol[sol.size()-i-1]] > 0){
                cout << sol[sol.size()-i-1] << ' ';
                n--;
            }
            m[sol[sol.size()-i-1]]--;
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