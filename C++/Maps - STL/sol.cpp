#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
map<string, int > m ;
map<string, int >::iterator itr;
string name ;
  int q , type , marks, temp=0;
cin>>q;
for(int i=0 ; i<q;i++){
       cin>>type;
    switch (type) {
    case 1:
    cin>>name>>marks;
    itr = m.find(name);
    if(itr==m.end())
    m.insert(make_pair(name, marks));          
    else{
    m[name] += marks ;
    }
    break;
    case 2:
    cin>>name;
    m.erase(name);
    break;
    case 3:
    cin>>name;   
    itr = m.find(name);
    if(itr==m.end())
          cout<<0<<endl;
    else
        cout<<m[name]<<endl;
    break;
    default:
    break;
    }
} 
    return 0;
}



