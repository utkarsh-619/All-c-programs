#include <iostream>
using namespace std;

class list{

private:

    float data;
    list *next;

public:

    void insert(float x);
    void show(list *temp);
};

list *head = NULL;

void list::insert(float x){

    list *temp = new list;
    temp->data= x;
    temp->next = head;

    head = temp;
}

void list::show(list *temp){

    if(temp == NULL){
        return;
    }
    show(temp->next);
    cout<<temp->data;
    
}

int main()
{

    list a;
    int x;
    cin>>x;
    a.insert(x);
    a.insert(3);
    a.insert(4);
    a.insert(5);
    a.show(head);
    return 0;
}