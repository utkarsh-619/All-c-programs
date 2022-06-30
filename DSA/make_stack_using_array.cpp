#include<iostream>
using namespace std;

// work on LIFO -> last in first out 

class stack{
    private: 
        int top=0;
        int A[10];
    public:
        void push(int x){
            if(top==10){
                cout<<"overflow"<<endl;
                return;
            }
            A[top++]=x;
            print();
        }

        void pop(){
            if(top==0){
                cout<<"there are no more element"<<endl;
                return;
            }
            top--;
            print();

        }
        void print(){
            cout<<"Now your stack is : ";
            for(int i=0;i<top;i++){
                cout<<A[i]<<"   ";
            }
            cout<<endl;
        }
};

int main(){
    stack my;
    my.push(2);
    my.push(5);
    my.push(3);
    my.pop();
    my.pop();
    my.push(13);
    return 0;
}