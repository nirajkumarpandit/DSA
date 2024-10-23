#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(3);
    s.push(80);
    s.push(90);
    cout<<"the top element is :"<<s.top()<<endl;
    s.pop();
    s.pop();
    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"the top element is :"<<s.top()<<endl;
    }
    cout<<"the size of stack :"<<s.size();
    return 0;
}