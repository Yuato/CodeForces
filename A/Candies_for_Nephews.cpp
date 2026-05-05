//Solved
/*
Solution:

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        int n; cin >> n;
        cout << (3 - (n % 3)) % 3 << '\n';
    }
}