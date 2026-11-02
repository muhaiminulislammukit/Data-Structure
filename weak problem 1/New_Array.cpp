
#include <bits/stdc++.h>
using namespace std;

void Concatenate(int A[], int B[], int N) {
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;
}

int main() {
    int N;
    cin >> N;

    int A[N], B[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    Concatenate(A, B, N);

    return 0;
}
