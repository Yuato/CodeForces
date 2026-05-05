#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, n, a, neg = 0, sum = 0;
    cin >> t; 
    for (int i = 0; i<t; i++){
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> a;
            if (a == -1){
                neg++;
            }
            if (a == 0){
                sum++;
            }
        }
        sum += (neg % 2) * 2;
        cout << sum <<'\n';
        sum = 0;
        neg = 0;
    }

    return 0;
}