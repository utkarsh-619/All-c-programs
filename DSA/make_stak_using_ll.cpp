#include<iostream>
using namespace std;

//work on LIFO -> last in first out 
class node{
    private: 
        int data;
        node* ptr;

    public:
        void print(node* temp);
        void push(int x);
        void pop();
};

node *head=NULL;
void node::pop(){
    node* temp=head;
    head=temp->ptr;
    delete(temp);
    print(head);
    cout<<endl;
}
void node::push(int x){
    node* temp=new node;
    temp->ptr=head;
    head=temp;
    head->data=x;
    print(head);
    cout<<endl;
}
void node::print(node* temp){
    if(head==NULL){
        cout<<"there are no element :"<<endl;
    }
    if(temp->ptr==NULL){
        cout<<"stack is : ";
        cout<<temp->data<<"   ";
        return;
    }
    print(temp->ptr);
    cout<<temp->data<<"   ";
}

int main(){
    node avi;
    avi.push(2);
    avi.push(5);
    avi.push(3);
    avi.pop();
    avi.pop();
    avi.push(10);
    return 0;
}