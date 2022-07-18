#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int start_up(){
    ios_base::sync_with_stdio(false);
    return 0;
}
class  Matrix {
    private:
    public:
    vector<vector<int>> a;
    Matrix operator+(Matrix &m2){
        for(int i =a.size() -1; i>=0 ; i-- ){
            for(int j=a[0].size() -1; j>=0 ; j-- ){
                a[i][j] = a[i][j] + m2.a[i][j];
            }
        }
    return *this;   
    }
};
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
