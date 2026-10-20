#include<iostream>
using namespace std;
int findGCD(int a,int b){
    if(b==0)
        return a;
        return findGCD(b,a%b);
}
int main(){
    int m,n;
    cout<<"enter two numbers"<<endl;
    cin>>m>>n;
    int gcd = findGCD(m,n);
    cout<<"the gcd of the given two numbers is "<<gcd;
    return 0;

}