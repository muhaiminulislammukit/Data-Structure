#include <bits/stdc++.h>
using namespace std;

int main() {
      vector<int> v ={ 1, 2, 3,4 };
    //   vector<int> v2 ={ 100, 200, 300};

        // v.insert(v.begin()+2,v2.begin(),v2.end()); //  multiple add kora 
         // v.insert(v.begin()+2,100); // single add 
        
         
    //   v.erase(v.begin()+2);// remove kora  single 

    //  v.erase(v.begin()+1 ,v.begin()+5);
     replace(v.begin(),v.end(),2,100);

         for (int  x : v){

        cout << x << " ";
    }

    return 0;
}