// Display this GP (Giomatic progrtion)- 5,15,45,...upto "n" terms

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int a =5;;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a*3;
    }
}