
#include <bits/stdc++.h>
using namespace std;

bool isPresent(unordered_set<int>& s, int x) {
    return s.find(x) != s.end();
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        if (isPresent(s, x)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
