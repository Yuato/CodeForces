//Solved
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve() {
    long long n; cin >> n;
    vector <long long > v(n);

    map<int, deque<long long>>even;
    map<int, deque<long long>>odd;
    forn (n) {
        cin >> v[i];
    }

    forn (n - 4){
        if (i % 2 == 0){
            even[v[i] + v[i+2] - v[i+4]].push_back(i);
        }
        else{
            odd[v[i] + v[i+2] - v[i+4]].push_back(i);
        }
    }
    
    long long ans = 0;

    for (const auto& [key, deq]: even){
        ans += ((long long)deq.size() * (long long)odd[key].size());
    }

    long long add = 0;
    long long sum  = 0;
    forn (n-4){
        add = 0;
        if (i % 2 == 0){
            sum = v[i] + v[i+2] - v[i+4];
            even[sum].pop_front();
            add = even[sum].size();
            if (add > 1){
                if (even[sum][0] == i + 2){
                    add--;
                }
                if (even[sum][0] == i + 4){
                    add --;
                }
                if (even[sum][1] == i + 4){
                    add --;
                }
            }
            else if (add == 1){
                if (even[sum][0] == i + 2){
                    add--;
                }
                if (even[sum][0] == i + 4){
                    add --;
                }
            }
            ans += add;
        }
        else{
            sum = v[i] + v[i+2] - v[i+4];
            odd[sum].pop_front();
            add = odd[sum].size();
            if (add > 1){
                if (odd[sum][0] == i + 2){
                    add--;
                }
                if (odd[sum][0] == i + 4){
                    add --;
                }
                if (odd[sum][1] == i + 4){
                    add --;
                }
            }
            else if (add == 1){
                if (odd[sum][0] == i + 2){
                    add--;
                }
                if (odd[sum][0] == i + 4){
                    add --;
                }
            }
            ans += add;
        }
    }
    cout << ans << '\n';
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