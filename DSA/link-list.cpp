#include <iostream>
using namespace std;

class node {
   private:
    int data;
    node *next;

   public:
    void insert(int value);
    void display();
};

node *head = NULL;

void node ::insert(int value) {
    node *temp = head;
    node *temp2 = head;
    if (head == NULL) {
        temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    while (temp != NULL) {
        temp2 = temp;
        temp = temp->next;
    }

    temp = new node;
    temp->data = value;
    temp->next = NULL;
    temp2->next = temp;
}


void node :: display(){
    node *temp;
    temp = head;
    while(temp != NULL){
        temp = temp->next;
        cout<<temp->data<<"  ";
    }
}

int main() {
    node ll;
    ll.insert(5);
    ll.insert(2);
    ll.insert(7);
    ll.insert(9);
    ll.insert(3);

    ll.display();
    
}