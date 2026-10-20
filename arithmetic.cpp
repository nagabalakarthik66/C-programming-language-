#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

float divide(int a, int b){
    if(b !=0){
        return (float)a/b;
    }
    else{
        cout<<"error";
        return 0;
    }
}

int Modulus(int a, int b){
    return a % b;
}
int main(){
    int n1, n2;
    char operation;
    cout<<"enter two numbers";
    cin>>n1>>n2;
    cout<<"enter the operation (+,-,*,/,%):";
    cin>"operation" ;
    switch (operation){
        case '+' :
        cout<<"result is "<<add(n1,n2);
        break;
         case '-' :
        cout<<"result is "<<subtract(n1,n2);
        break;
        case '*' :
        cout<<"result is "<<multiply(n1,n2);
        break;
        case '/' :
        cout<<"result is "<<divide(n1,n2);
        break;
        case '%' :
        cout<<"result is "<<Modulus(n1,n2);
        break;

        default :
        cout<<"entered case cannot be executed";
        break;

    }
    return 0;

}