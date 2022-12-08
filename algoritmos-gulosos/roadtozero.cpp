// https://codeforces.com/contest/1342/problem/A

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        ll cost;
        if (a*2 <= b) {
            cost = a*(x+y);
        } else {
            cost = b*(min(x,y)) + a*(max(x,y)-min(x,y));
        }
        cout << cost << '\n';
    }

    return 0;
}