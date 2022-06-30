#include<iostream>
using namespace std;

struct node{
    int data;
    node* ptr;
};
node* head=NULL;

void show(){
    node* temp=head;
    cout<<"list is : ";
    while (temp!=NULL)
    {

        cout<<temp->data<<"   ";
        temp=temp->ptr;
    }
    cout<<endl;
}

void insert(int x,int n){
    node* temp1=new node();
    temp1->data=x;
    if(n==1){
    temp1->ptr=head;
    head=temp1;
    return;
    }

    node* temp2;
    temp2=head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->ptr;
    }
    temp1->ptr=temp2->ptr;
    temp2->ptr=temp1;
}

void deletion(int n){
    if(n<0)     return;
    node* temp1;
    temp1=head;
    for(int i=0;i<n-2;i++){
        temp1=temp1->ptr;       
    }
    if(n==1){
        head=temp1->ptr; 
        delete(temp1);
        return;
    }
    node* temp2;
    temp2=temp1->ptr;
    temp1->ptr=temp2->ptr;
    delete(temp2);
}

void reverse(int n){
    node* temp1;
    node* temp2;
    for(int i=0;i<n;i++){
        if(i==0){
            temp1=head;
            temp2=temp1->ptr;
            temp1->ptr=NULL;
        }
        else if(i==(n-1)){
            temp2->ptr=temp1;
            head=temp2;
        }
        else{
            temp1=temp2->ptr;
            temp2->ptr=head;
            head=temp1;
            temp1=temp2;
            temp2=head;
            head=temp1;
        }

    }
}

void print(node* temp){
    if(temp->ptr==NULL){
        cout<<"list is : ";
        cout<<temp->data<<"   ";
        return;
    }
    print(temp->ptr);
    cout<<temp->data<<"   ";
}

void reverse_recr(node* temp,node* temp2){
    if(temp->ptr==NULL){
        temp->ptr=temp2;
        head=temp;
        return;
    }
    head=temp->ptr;
    temp->ptr=temp2;
    reverse_recr(head,temp);
    
}

int main(){
    int n;
    cout<<"Tell me how much you need : ";
    cin>>n;         

    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter your element "<<i+1<<" : ";
        cin>>x;
        insert(x,i+1);
    }

    show();
    reverse_recr(head,NULL);
    show();
    // print(head);
    // reverse(n);
    // deletion(4);
    // show();

    return 0;
}