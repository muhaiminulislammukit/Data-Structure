
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> F(26, 0);

    for (int i = 0; i < S.size(); i++) {
        F[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (F[i] > 0) {
            cout << char(i + 'a') << " : " << F[i] << endl;
        }
    }

    return 0;
}
