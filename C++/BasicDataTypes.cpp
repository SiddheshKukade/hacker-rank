#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   int i ;
  long l ; 
   char c ; 
   float f ;
   double d;
   cin>>i>>l>>c>>f>>d;
   printf("%d\n%ld\n%c\n%.3f\n%0.9lf", i , l , c ,f, d );
    return 0;
}
