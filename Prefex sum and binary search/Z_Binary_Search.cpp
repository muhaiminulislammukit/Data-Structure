
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    while (Q--) {
        int val;
        cin >> val;

        if (binary_search(A.begin(), A.end(), val)) {
            cout << "found\n";
        }
        else {
            cout << "not found\n";
        }
    }

    return 0;
}
