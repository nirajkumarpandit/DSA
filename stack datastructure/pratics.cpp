#include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int *arr;
    int size;
    stack(int size){
        this -> size=size;
        arr =new int[size];
        top =-1;

    }
    void push(int element){
        if(size-top > 1){
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
        return arr[top];
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    stack s(5);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    if(s.isEmpty()){
        cout <<"niraj";
    }
    return 0;
}