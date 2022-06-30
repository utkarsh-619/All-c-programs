#include<iostream>
#include<stack>
using namespace std;

class node{
    private:
        int data;
        node *next;
    public:
        void insert(int x);
        void show();
        void reverse();
};

node* head=NULL;
void node::insert(int x){
    node* temp=new node;
    temp->data=x;
    temp->next=head;
    head=temp;
}

void node::show(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"   ";
        temp=temp->next;
    }
}

void node::reverse(){
    stack<node*> A;
    node* temp=head;
    while(temp!=NULL){
        A.push(temp);
        temp=temp->next;
    }
    head=A.top();
    A.pop();
    temp=head;
    while(A.size()){
        temp->next=A.top();
        temp=A.top();
        A.pop();
    }
    temp->next=NULL;
}

int main(){
    node avi;
    avi.insert(4);
    avi.insert(6);
    avi.insert(3);
    avi.insert(8);
    cout<<"Before reverse : ";
    avi.show();
    avi.reverse();
    cout<<"\nAfteer reverse : ";
    avi.show();

    return 0;
}