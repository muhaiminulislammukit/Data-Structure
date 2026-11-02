
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    for (int i = 0; i < N; i++) {
        if (V[i] > 0) {
            V[i] = 1;
        }
        else if (V[i] < 0) {
            V[i] = 2;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }

    return 0;
}
