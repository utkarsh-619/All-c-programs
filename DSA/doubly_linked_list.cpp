#include<iostream>
using namespace std;

class node{
    private: 
        int data;
        node* next;
        node* pev;

    public: 
        void show();
        
};

node* head;
void node::show(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"    ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    
    return 0;
}