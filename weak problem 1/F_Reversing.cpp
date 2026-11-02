
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }

    return 0;
}

// use vector Solve by reversing the vector

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    int L = 0, R = N - 1;

    while (L < R) {
        int TEMP = V[L];
        V[L] = V[R];
        V[R] = TEMP;

        L++;
        R--;
    }

    for (int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }

    return 0;
}
