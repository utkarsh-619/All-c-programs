#include<iostream>
using namespace std;

class node{
    private :
        int data;
        node* next;
        node* pev;
    
    public :
        void insert(int x,int n);
        void show(node*);
        void insert(int kya , int kaha){
            
        }
};

node* head=NULL;

void node::insert(int x,int n){
    // for inserting in head 
    node* temp;
    temp=new node;
    temp->data=x;
    temp->next=head;
    head=temp;

    // for inserting in nth position
    // if(n==1){
    //     node* temp;
    //     temp=new node;
    //     temp->data=x;
    //     temp->next=head;
    //     head=temp;
    //     return;
    // }
    // node *temp1=head;
    
    // for(int i=0;i<n-2;i++){
    //     temp1=temp1->next;
    // }
    // node* temp=new node;
    // temp->data=x;
    // temp->next=temp1->next;
    // temp1->next=temp;

}

void node::show(node *temp){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"   ";
        temp=temp->next;
    }

    // if(temp->next==NULL){
    //     cout<<temp->data<<"    ";
    //     return;
    // }
    // show(temp->next);
    // cout<<temp->data<<"    ";
}

int main(){
    int n;
    node avi;
    cout<<"Tell me how much var you need : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the number of element no."<<i+1<<" : ";
        int x;
        cin>>x;
        avi.insert(x,i+1);
    }
    cout<<"list is : ";
    avi.show(head);
    
    return 0;
}