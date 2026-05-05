#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n;
    double a, b;
    int r = 0, y = 0;
    vector<double>red;
    vector<double>yellow;
    for (int j = 0; j< 20; j++){
        cin >> n;
        forn (n){
            cin >> a >> b;
            if (j % 2 == 0){
                red.push_back (sqrt(pow(a-144, 2) + pow(b-84, 2)));
            }
            else {
                yellow.push_back(sqrt(pow(a-144, 2) + pow(b-84, 2)));
            }
        }
        if (j%2 == 1){
            sort(red.begin(), red.end());
            sort(yellow.begin(), yellow.end());
            if (red.size()>0 && yellow.size()>0){
                if (red[0]<yellow[0]){
                    for (double z : red){
                        if (z < yellow[0]) r++;
                    }
                }
                else {
                    for (double z : yellow){
                        if (z < red[0]) y++;
                    }
                }
            }
            else if (red.size() == 0){
                y += yellow.size();
            }
            else {
                r += red.size();
            }
            red.clear();
            yellow.clear();
        }
    }
    cout<< r <<" "<< y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    forn (t){
        solve();
    }

    return 0;
}