#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int  n,temp;
    vector<int> vec ;
    cin>>n;
    for(int i =0 ; i<n ; i++){
        cin>>temp;
        vec.push_back(temp);
    }
   sort(vec.begin(),vec.end());  
     for(int i =0 ; i<n ; i++){
     cout<<vec[i]<<" ";
    }
    return 0;
}
