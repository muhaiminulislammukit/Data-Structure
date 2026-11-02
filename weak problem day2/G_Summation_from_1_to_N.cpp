
#include <bits/stdc++.h>
using namespace std;

long long summation(long long n) {
    long long sum = 0;

    for (long long i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    long long n;
    cin >> n;

    cout << summation(n) << endl;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    cout << sum << endl;

    return 0;
}
    