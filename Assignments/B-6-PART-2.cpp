
#include <iostream>
using namespace std;
template<class T>
class Stack{
    private:
        T* arr;
        int top=-1;
        int capacity;
    public:
        Stack(int size){
            capacity=size;
            arr= new T[capacity];
            cout<<"Made a stack of size: "<<size<<endl;
        }
        
        ~Stack(){
            delete[] arr;
        }
        
        bool isFull(){
            if(top==capacity-1){return 1;}
            return 0;
        }
        
        bool isEmpty(){
            if(top==-1){return 1;}
            return 0;
        }
        
        void push(T e){
            if(isFull()){
                cout<<"Stack is full cant push"<<endl;
                return;
            }
            top++;
            arr[top]=e;
            cout<<"Pushed: "<<e<<endl;
        }
        
        T pop(){
            if(isEmpty()){
                cout<<"Stack is empty cant pop";
                return T();
            }
            T val=arr[top];
            top--;
            return val;
            
        }
        
        void disp(){
           int temp=top;
           while(temp>=0){
            cout<<arr[temp]<<endl;
            temp--;
           }
           
            
        }
};

int main()
{
    Stack <int> s1(3);
    s1.push(3);
    s1.push(5);
    s1.push(6);
    s1.disp();
    s1.push(58);
    s1.pop();
    s1.push(58);
    s1.disp();
    

    return 0;
}
