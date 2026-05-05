#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

pii rotate (int rot, pii inx){
    if (rot == 0){
        return pair (inx.first+1, inx.second);
    }
    if (rot == 1){
        return pair (inx.first, inx.second+1);
    }
    if (rot == 2){
        return pair (inx.first-1, inx.second);
    }
    return pair (inx.first, inx.second-1);
}

void solve(){
    int r, c; cin >> r >> c;
    int rs, cs; cin >> rs >> cs;
    int re, ce; cin >> re >> ce;
    int arr [r + 10] [c + 10];

    map <pii, vector<int>> moves;

    int rot = 0;

    char a, b;
    for (int i = 0; i < r + 2; i++){
        for (int j = 0; j < c + 2; j++){
            arr [i] [j] = 1;
        }
    }
    for (int i = 1; i < r + 1; i++){
        for (int j = 1; j < c + 1; j++){
            cin >> a;
            arr [i] [j] = a - '0';
        }
    }
    if (rot == 0) {

    }
    pii next, next2, next3;
    bool win = false;
    int count = 0;
    while (true) {
        if (rs == re && cs == ce){
            win = true;
            break;
        }
        next = rotate((rot+3)%4, pair(rs,cs));
        next2 = rotate(rot, pair(rs,cs));
        next3 = rotate((rot+1)%4, pair(rs,cs));
        if (arr[next.first][next.second] == 0){
            rs = next.first;
            cs = next.second;
            rot = (rot+3) % 4;
        }
        
        else if (arr[next2.first][next2.second] == 0){
            rs = next2.first;
            cs = next2.second;
            rot = (rot) % 4;
        }
        else {
            while (arr[next3.first][next3.second] == 1){
                count++;
                rot = (rot+1) % 4;
                next3 = rotate((rot+1)%4, pair(rs,cs));
                if (count > 4) break;
            }
            rot = (rot+1) % 4;
            rs = next3.first;
            cs = next3.second;
        }
        if (find(moves[pair(rs,cs)].begin(),moves[pair(rs,cs)].end(),rot)!=moves[pair(rs,cs)].end()){
            break;
        }
        moves [pair(rs, cs)].push_back(rot);
    }
    cout << win ? 1 : 0;
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