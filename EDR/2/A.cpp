#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

/*
1. just convert to ASCII, keep bool to determine if all numbers or not
2. store start index, and length of word
*/

using namespace std;


void solve(){
    string s; getline(cin, s);
    vector<pii>a,b;
    bool num = true;
    int begin = 0;

    forn (size(s)){
        int asc = s[i];
        if (asc == 44 || asc == 59){
            if (num && (s[begin]!='0' || i-begin == 1) && i-begin>0){
                a.push_back(pair(begin,i-begin));
            }
            else{
                b.push_back(pair(begin,i-begin));
            }
            num = true;
            begin = i+1;
        }
        else if (asc-'0'>9||asc-'0'<0){
            num = false;
        }
    }
    if (num && (s[begin]!='0'||s.size()-begin == 1) && s.size()-begin>0) a.push_back(pair(begin,s.size()-begin));
    else b.push_back(pair(begin,s.size()-begin));

    if (!size(a))cout <<'-';
    forn (size(a)){
        if (i == 0) cout << "\"";
        auto c = a[i];
        cout << s.substr(c.first,c.second);
        if (i < size(a)-1){
            cout << ',';
        }
        else{
            cout << "\"";
        }
    }

    cout <<'\n';

    if (!size(b))cout <<'-';
    forn (size(b)){
        if (i == 0) cout << "\"";
        auto c = b[i];
        cout << s.substr(c.first,c.second);
        if (i < size(b)-1){
            cout << ',';
        }
        else cout << "\"";
    }

    cout <<'\n';
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