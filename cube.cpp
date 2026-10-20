#include<iostream>
using namespace std;
int cube(int a){
    return a * a * a;
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<"cube of the number"<<n<<"is"<< cube(n);
    return 0;
}