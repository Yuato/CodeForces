//NOT SOLVED
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
 
using namespace std;
 
void solve (){
    int n; 
    string s;
    cin >> n >> s;
    int la, ra, a = 0;
    int lb, rb, b = 0;

    for (char i : s){
        if (i == 'a') a++;
        else b++;
    }

    a = a / 2;
    b = b / 2;

    int A = 0, B = 0;
    for (int i = 0; i < n; i++){
        if (i == 'a') A++;
        else B++;

        if (A == a){
            la = i - 1;
            ra = i + 1;
        }
        if (B == b){
            lb = i - 1;
            rb = i + 1;
        }
    }
    a = 0, b = 0;
    int irb = rb, ilb = lb, ila = la, ira = ra;
    while (true){
        if (irb >= n && ilb < 0 && ira >= n && ila < 0){
            break;
        }
        if (irb < n-1 && s[irb] == 'b'){
            b += irb - rb+1;
            rb = rb + 1;
        }

        if (ira <= n-1 && s[ira] == 'a'){
            a += ira - ra+1;
            ra = ra + 1;
        }

        if (ila >= 0 && s[ila] == 'a'){
            a += la - ila+1;
            la = la - 1;
        }

        if (ilb >= 0 && s[ilb] == 'a'){
            b += lb - ilb+1;
            lb = lb - 1;
        }
        ila--;
        ilb--;
        ira++;
        irb++;
    }

    cout << min(a,b) << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }
}