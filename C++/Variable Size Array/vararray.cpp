/**
@Problem : Variables Sized Array : https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
@Author : Kukade Siddhesh Kukade 
@Date : 19 May 2022
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Exaplaination of the Input
// 2 2  == No of Array & No of Queries
// 3 1 5 4 == First Number Size of  Array | Elements of the array 
// 5 1 2 8 9 3 == First Number Size of Array | Elements of the array
// 0 1 == No of the array provided  | Index of the Element to be  Retreived
// 1 3 == No of the array provided  | Index of the Element to be  Retreived

int main() {
   int x ,y ,s ; 
     // x - no of array , y - no of queires , s- currentSelectedArray
   cin>>x>>y;
   int* arr[x];
   
   while(x--){
       int n ;
       cin>>n;
       
       arr[s] = new int[n];
       
       for(int i=0 ; i<n;i++){
           cin>>arr[s][i];
       }
       s++;
   }
   while(y--){
       int a,b ; // postionns of array 
       cin>>a>>b;
       
       cout<<arr[a][b]<<endl;
   }
    return 0; 
}
