
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    int COUNT = 0;

    for (int i = 0; i < N; i++) {
        if (find(V.begin(), V.end(), V[i] + 1) != V.end()) {
            COUNT++;
        }
    }

    cout << COUNT << endl;

    return 0;
}
