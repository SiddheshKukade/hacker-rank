#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
int start_up(){
    ios_base::sync_with_stdio(false);
    return 0;
}
/*Write the class AddElements here*/
template <class T >
class AddElements{
    T e1;
    public:
    AddElements(T temp){this->e1 = temp;}
  T add(T temp){
      e1+=temp;
      return e1;
  }  
  T concatenate(T e2){
      return e1+e2;
  }
  
};
int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
