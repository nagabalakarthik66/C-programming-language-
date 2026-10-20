#include<iostream>
using namespace std;
float areaCircle(float r){
    return 3.14 * r * r;
}
float areaTriangle(float base ,float height){
    return 0.5 * base * height;
}
float areaRectangle(float length ,float width){
    return length * width;
}
int main(){
    float r, base , height,length,width;
    cout<<"enter the radius of circle";
    cin>>r;
    cout<<"the area of the circle is "<<areaCircle(r)<<".";

    cout<<"enter the base and height of the triangle";
    cin>>base>>height;
    cout<<"the area of the triangle is"<<areaTriangle(base,height)<<".";
    cout<<"enter the length and width of rectangle";
    cin>>length>>width;
    cout<<"the area of rectangle is "<<areaRectangle(length,width)<<".";
    return 0;


    
}