#include <bits/stdc++.h>
using namespace std;

int main() {
      vector<int>v(10 ,-1);//type 3

      vector<int>v1(v); //type 4
 
      for (int i= 0; i<v1.size();i++){

          cout << v1[i] << " ";

      }
    return 0;
}