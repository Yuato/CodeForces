#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, m, l; cin >> n >> m >> l;
    int flash[n];
    vector<int>anim;

    forn(n) {
        cin >> flash[i];
    }
    forn(min(m,n+1)){
        anim.push_back(0);
    }

    int max = 0, inx = 0;
    int t = 0;
    int s = 0;
    forn(n) {
        s = flash[i] - t;
        t = flash[i];
        int min = l;
        inx = 0;
        while (s > 0){
            forn(anim.size()){
                if (anim[i] < min){
                    min = anim[i];
                    inx = i;
                }
            }
            anim[inx]++;
            min = anim[inx];
            s--;
        }
        max = 0; 
        inx = 0;
        forn(anim.size()){
            if (anim[i] > max){
                max = anim[i];
                inx = i;
            }
        }
        if (n-i < anim.size()){
            anim.erase(anim.begin()+inx);
        }
        else{
            anim[inx] = 0;
        }
    }

    m = 0;
    inx = 0;
    forn(anim.size()){
        if (anim[i] > m){
            m = anim[m];
            inx = i;
        }
    }
    cout << anim[inx] + l - t << '\n';
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