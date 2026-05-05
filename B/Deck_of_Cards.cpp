#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n, k; cin >> t;
    int l = 0, r = 0, q = 0;
    string str;
    for (int i = 0; i < t; i++){
        cin >> n >> k >> str;
        for (char c : str){
            if (c == '0'){
                l++;
            }
            else if (c == '1') r++;
            else q++;
        }
        
        for (int j = 0; j < l; j++){
            cout<<'-';
        }
        if (n-l-r <= 2*q){
            if (n-l-r <= q){
                for (int j = 0; j < n-l-r; j++){
                    cout<<'-';
                }
            }
            else{
                for (int j = 0; j < n-l-r; j++){
                    cout<<'?';
                }
            }
        }
        else{
            for (int j = 0; j < q; j++){
                cout<<'?';
            }
            for (int j = 0; j < (n-2*q-l-r); j++){
                cout<<'+';
            }
            for (int j = 0; j < q; j++){
                cout<<'?';
            }
        }
        for (int j = 0; j < r; j++){
            cout<<'-';
        }
        l = 0, r = 0, q = 0;
        cout<<'\n';
    }

    return 0;
}