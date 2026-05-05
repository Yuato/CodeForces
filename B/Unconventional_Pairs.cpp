#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, n, a, ans = 0;
    vector <int> v;
    cin >> t;
    for (int i = 0; i<t; i++){
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        for (int j = 0; j < n / 2; j++){
           ans = max(v[j * 2 + 1] - v[j * 2], ans);
        }
        cout << ans<< '\n';
        ans = 0;
        v.erase(v.begin(), v.end());
    }

    return 0;
}