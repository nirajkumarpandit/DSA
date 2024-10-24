// Display this AP (arithmatic progrtion)- 1,3,5,7,9,...upto "n" terms

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int a =1;;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a+2;
    }
}