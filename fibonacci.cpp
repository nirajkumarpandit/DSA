// fibonacci sequence means 
// 1,1,2,3,5,8,...
// 1+1=2
// 1+2=3
// 2+3=5
#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return 1;
    }
    return n =fibo(n-1)+fibo(n-2);
}
int main(){
    int a;
    cout<<"Enter the number :";
    cin>>a;
    cout<<"The term of fibonacci sequence at position "<<a<<" is :"<<fibo(a);

    return 0;
}