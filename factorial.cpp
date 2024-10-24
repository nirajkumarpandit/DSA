// how it is work ?
// factorial(4) = 4* factorial(3);
// factorial(4) = 4*3 factorial(2);
// factorial(4) = 4*3*2 factorial(1);
// factorial(4) = 4*3*2*1; condition is match then return

#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n = n* factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter the number :";
    cin>>a;
    cout<<"The factorial of "<<a<<" is :"<<factorial(a);

    return 0;
}