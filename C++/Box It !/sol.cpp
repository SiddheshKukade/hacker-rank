#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box{
    private:
    int l,b,h;
    public:
    Box(){ l=b=h=0;}
    Box(int l, int b , int h){
        this->l = l ;
        this->b = b ;
        this->h = h ;
    }
    Box (Box &box){
        this->l = box.getLength() ;
        this->b = box.getBreadth() ;
        this->h = box.getHeight() ;
    }
    
    int getLength() {return (l);}
    int getBreadth() {return (b);}
    int getHeight() {return (h);}
    
    long long CalculateVolume(){
      return ((long long)l*b*h);  
    }
    
    bool operator<(Box &box){
        return(
             ((this->l < box.getLength()) ||
        (this->b < box.getBreadth()  && this->l == box.getLength())  )
      ||
      ((this->l == box.getLength()) &&
        this->b == box.getBreadth() &&
      (  this->h < box.getHeight()))) ;
    }
};
   ostream& operator<<(ostream &out, Box &box){
     out<<box.getLength()<<" "<<box.getBreadth()<<" "<<box.getHeight();
     return out ;
    }
// The chass should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

