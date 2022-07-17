#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  /*
  1. Print length of the strings separated by numbers */
  string s1 , s2;
  cin>>s1>>s2;
  cout<<s1.length()<<" "<<s2.length()<<endl;
  
// 2. Print concatenations 
cout<<s1+s2<<endl;
// 3. Print the complement
char c0 = s1[0];
char c1 = s2[0];

s1 = s1.substr(1,s1.length()) ;
s2 = s2.substr(1,s2.length());
cout<<c1+s1<<" "<<c0+s2<<endl;
    return 0;
}
