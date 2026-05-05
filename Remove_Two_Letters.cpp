//Solved (codeforces)
//Solution: 
// 1. The maximum number of unique strings from removing two adjacent chars is length of string -1
// 2. Take two consecutive, then compare to the next two consecutive and if they contain the same chars, then they will result in the same string when removed
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    string s;

    for (int i = 0; i<t; i++){
        int size; cin>>size;
        size--;
        cin>>s;
        char a, b;
        a = s[0];
        b = s[1];

        for (int j = 2; j < s.length(); j++){
            if (a == s[j] && b == s[j-1]){
                size--;
            }
            else if (b == s[j] && a == s[j-1]){
                size--;
            }

            a = s[j-1];
            b = s[j];
            
        }
        cout<<size;
        if (i+1!=t) cout<<'\n';

    }
}