#include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int *arr;
    int size;
    stack(int s){
        this -> size =s;
        top =-1;
        arr = new int[size];

    }
    int push(int element){
        if(size-top > 1){
            top ++;
            arr[top]=element;
        }
        else{
            cout << "overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top --;
        }
        else{
            cout << "underflow"<<endl;
        }
    }
    int peek(){
        return arr[top];
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
    s.pop();
    return 0;
}