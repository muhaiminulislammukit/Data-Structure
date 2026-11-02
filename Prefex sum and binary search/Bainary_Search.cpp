
#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int val;
    cin >> val;

    int flag = 0;

    int l = 0;
    int r = N - 1;

    while(l <= r){

        int mid = l + (r - l) / 2;

        if(A[mid] == val){
            flag = 1;
            break;
        }

        else if(A[mid] > val){
            r = mid - 1;
        }

        else{
            l = mid + 1;
        }
    }

    if(flag == 1){
        cout << "Found\n";
    }
    else{
        cout << "Not Found\n";
    }

    return 0;
}
