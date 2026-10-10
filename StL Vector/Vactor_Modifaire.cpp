#include <bits/stdc++.h>
using namespace std;

int main() {
        
    vector<int> v ={ 1, 2, 3,4};
    vector<int>v2;
    v2 = v;
     
    // for (int i = 0; i<v.size(); i++){
    //      cout << v[i] << " " ;
    // }
    for (int  x : v2){
        cout << x << " ";
    }

    return 0;
}