
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            cout << 1;
        }
        else if (A[i] < 0) {
            cout << 2;
        }
        else {
            cout << 0;
        }

        if (i < N - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
