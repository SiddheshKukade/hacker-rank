#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
set<int> s ;
set<int>::iterator itr ;
int q, x, y ;
cin>>q;
for(int i=0 ; i<q;i++){
    cin>>y>>x;
    switch (y) {
    case 1:
    s.insert(x);
    break;
    case 2:
    s.erase(x);
    break;
    case 3:
    itr = s.find(x);
    if(itr==s.end())
          cout<<"No\n";
    else
        cout<<"Yes\n";
    break;
    default:
    break;
    }
}
    return 0;
}



