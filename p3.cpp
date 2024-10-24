// print the pattern1
// AB
// 123
// ABCD
// 12345
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++ ){
           if(i%2==0){
            cout<<(char)(j+64);
           }
           else{
            cout<<j;
           }
        }
        cout<<endl;
    }
    return 0;
}