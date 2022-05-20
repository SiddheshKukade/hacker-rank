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
    int noOfArray=0 , noOfQuery=0, arrayCounter=0;
    cin>>noOfArray>>noOfQuery;
    //variable sized array
    int *arr[noOfArray];
    while(noOfArray-- ){ // loop noOfArray times
        int sizeOfCurrentArray;
        cin>>sizeOfCurrentArray;
        arr[arrayCounter]=new int [sizeOfCurrentArray];
        
        for(int i = 0 ; i<sizeOfCurrentArray ; i++){
            cin>>arr[arrayCounter][sizeOfCurrentArray];
        } 
        arrayCounter++;
    }
    while(noOfQuery--){
        int arrayToGet , valueToGet;
        cin>>arrayToGet>>valueToGet;
        cout<<arr[arrayToGet][valueToGet]<<endl;
    }
    
    return 0;
}
