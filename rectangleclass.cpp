#include<iostream>
using namespace std;
class Rectangle{
private:
    float length;
    float width;
public:
Rectangle(float length=0, float width=0)
{
this->length=length;
this->width=width;
}

void setLength(float length)
{
this->length=length;
}

void setWidth(float width)
{
this->width=width;
}

float getLength()
{
    return length;
}

float getWidth()
{
    return width;
}

float areaOfRectangle()
{
    return length*width;
}

float perimeterOfRectangle()
{
   return 2*( length + width );
}
};


int main(){
Rectangle r1;
r1.setLength(2.4);
r1.setWidth(1.2);
cout<<"The length is : "<<r1.getLength()<<endl;
cout<<"The width is: "<<r1.getWidth()<<endl;
cout<<"The area of rectangle is  : "<<r1.areaOfRectangle()<<endl;
cout<<"The perimeter of rectangle is  : "<<r1.perimeterOfRectangle()<<endl;
}