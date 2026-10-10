#include <bits/stdc++.h>
using namespace std;

int main() {
          vector<int> v ={ 1, 2, 3,4 };

    //  replace(v.begin(),v.end(),2,100);
        //  replace(v.begin(),v.end()-1,2,100);

    //   vector<int >:: iterator it = find (v.begin(),v.end(),100);

      auto it = find (v.begin(),v.end(),4);

          cout << *it << endl;


        //   if(it == v.end()){
        //     cout << "Not Found";
        //   }
        //   else {
        //     cout << "Found";
        //   }
    return 0;
}