// check the even or odd number using the if else statement  


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer number :";
    cin>>n;
    if(n%2==0){
        cout<<"the number is even .";
    }
    else{
        cout<<"the number is odd";
    }
    return 0;
}