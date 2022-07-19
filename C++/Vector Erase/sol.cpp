#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b ; // range to be removed starting with 1 
    int n ; // size of the vector
    int  x ;  // position of element to be removed 
    int temp;
    vector<int> vec ; 
    
    cin>>n; 
    for(int i =0 ; i<n ; i++){
        cin>>temp;
        vec.push_back(temp);
    }
    
    cin>>x;
    
    cin>>a;
    cin>>b;
    
    //logic
    vec.erase(vec.begin()+(x-1));
    
    vec.erase(vec.begin()+(a-1), vec.begin()+(b-1));
    cout<<vec.size()<<"\n";
     for(int i =0 ; i<vec.size() ; i++){
       cout<<vec[i]<<" ";
    }
    return 0;
}
