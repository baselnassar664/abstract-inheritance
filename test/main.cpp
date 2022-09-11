
#include<iostream>
using namespace std;
class  GeometricObject{
public:
   virtual double getParameter()=0;
   virtual double getArea()=0;
};
 class Circle:public GeometricObject{
protected:
     double  radius;
 public:
     Circle(double radius){
     Circle :: radius=radius;
     }
    Circle(){
     radius=0;
    }
    double getParameter(){
     return 2*3.14*radius;
    }
    double getArea(){
     return 3.14*radius*radius;
    }
 };
class Resizable{
public:
    virtual void Resize (int percent)=0;
};
 class  ResizableCircle:public Circle, public Resizable{
 private:
 public:
     ResizableCircle(double radius):Circle(radius){

     }
     ResizableCircle():Circle(){}
     void Resize(int percent){
     cout<<"Radius="<<radius*(percent/100)<<endl;
     }

 } ;
int main() {

Circle circle(3);
cout<<"Parameter="<<circle.getParameter()<<endl;
cout<<"Area="<<circle.getArea()<<endl;
cout<<"*************************"<<endl;

ResizableCircle r(5);
r.Resize(100);



}


