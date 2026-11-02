#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
      vector<int>v(N);
    for (int i=0;i<N;i++){
         cin >> v[i];
    }
    
    sort(v.begin() , v.end());
    for(int i = 1; i < N; i++)
    {
        if(v[i] == v[i - 1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}