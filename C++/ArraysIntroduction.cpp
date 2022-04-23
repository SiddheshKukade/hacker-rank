/** 
Input Format

The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.

Constraints


, where  is the  integer in the array.

Output Format

Print the  integers of the array in the reverse order, space-separated on a single line.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[1000], limit ;
    cin>>limit;   
    for(int  i = 0 ; i<limit; i++)
    {
        cin>>a[i];
    }
     for(int  i = limit -1  ; i>=0 ;i--)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
