#include<iostream>
using namespace std;
float ftoc(float f){
    return (f-32) * 5.0 / 9.0 ;
}
float ctof(float c){
    return (c * 9.0 / 5.0) +32;
}
int main(){
    float c,f;
    cout<<"enter the temperature in fahrenheit";
    cin>>f;
    cout<<"the temperature in celsius is "<<ftoc(f)<<endl;
    cout<<"enter the temperature in celsius";
    cin>>c;
    cout<<"the temperaature in fahrenheit is "<<ctof(c)<<endl;
    return 0;

}