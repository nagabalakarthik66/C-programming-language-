#include<iostream>
using namespace std;

int main(){
    int num;
    int reverse = 0;
    cout<<"enter a number";
    cin>>num;
    while(num>0){
        int d = num%10;
        reverse = reverse*10 + d;
        num /= 10;

    }
    cout<<"the reverse of the number "<<num<<"is "<<reverse;
    return 0;
    
}