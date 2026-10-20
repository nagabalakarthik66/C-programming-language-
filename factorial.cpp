#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial = 1;
    cout<<"enter a nummber";
    cin>>n;

    for(int i = 1;i<=n;i++){
        factorial *= i;
    }
    cout<<"the factorial of the given number is "<<factorial<<endl;
    return 0;
}