#include<iostream>
using namespace std;
class stack{
    // properties 
    public:
    int top;
    int *arr;
    int size;
    // behaviour
    stack(int size){
        this -> size =size;
        top=-1;
        arr =new int[size];
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"overflow"<<endl;
        }

    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"underflow"<<endl;
        }

    }
    int peek(){
        if(top>=0 && top<size){
             return arr[top];
        }
       
    }
    bool isEmpty(){
        if(top =-1){
            return true;
        }
        else{
            return false;
        }
        
    }

};


int main(){
    stack s(5);
    s.push(80);
    s.push(90);
    s.push(800);
    s.push(80);
    s.push(90);
    
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    if(s.isEmpty()){
        cout<<"stack is empty";

    }

    return 0;
}