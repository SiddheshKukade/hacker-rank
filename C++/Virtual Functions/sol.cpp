#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int i=0; 
static int j=0;
class Person{
    public:
    int age ;
    string name;
    virtual void getdata()= 0;
    virtual void putdata()= 0;
};
class Professor : public Person{
    int  publications , cur_id;
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<++i<<endl;
    }
};
class Student : public Person{
    int marks, cur_id;
      void getdata(){
        cin>>name>>age;
        
    for(int i= 0 ; i<6; i++){
        int x; alignas(expression)
            cin>>x; 
            marks+=x;
        }
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<marks<<" "<<++j<<endl;  
    
    }
};
int main(){
