#include<algorithm>
#include<iostream>
using namespace std;

class node{
    private:
        char data;
        node* left;
        node* right;

    public:
        node* getnode(int x);
        node* insert(node* temp,int x);
        bool search(node* temp,int x);
        int find_min(node *temp);
        int find_max(node* temp);
        int find_hieght(node* temp){
            if(temp==NULL) return -1;

            return max(find_hieght(temp->right),find_hieght(temp->left))+1;
        }
        void show(node *temp);
};

node* node :: insert(node* temp,int x){
    if(temp==NULL){
        temp = getnode(x);
    }   
    else if(temp->data>=x){
        temp->left=insert(temp->left,x);
    }
    else if(temp->data<x){
        temp->right=insert(temp->right,x);
    }
    return temp;
}

node* node :: getnode(int x){
    node* temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right= NULL;
    return temp;
}

bool node :: search(node* temp,int x){
    if(temp==NULL){
        return false;
    }
    else if(temp->data==x){
        return true;
    }
    else if(x<temp->data){
        return search(temp->left,x);
    }
    else if(temp->data<x){
        return search(temp->right,x);
    }
}
int node ::find_min(node* temp){
    if(temp==NULL){
        return -1;
    }
    else if(temp->left==NULL){
        return temp->data;
    }
    find_min(temp->left);
}
int node ::find_max(node* temp){
    if(temp==NULL){
        return -1;
    }
    else if(temp->right==NULL){
        return temp->data;
    }
    find_max(temp->right);
}

void node::show(node* temp){
    if(temp==NULL){
        return;
    }
    // DLR = preorder   // LDR = inorder    // LRD = postorder
    cout<<temp->data<<"  ";         //D
    show(temp->left);               //L
    show(temp->right);              //R
}

int main(){
    node x;
    // cout<<sizeof(x);
    node* root=NULL;
    root = x.insert(root,'f');
    x.insert(root,'d');
    x.insert(root,'j');
    x.insert(root,'b');
    x.insert(root,'e');
    x.insert(root,'g');
    x.insert(root,'k');
    x.insert(root,'a');
    x.insert(root,'c');
    x.insert(root,'i');
    x.insert(root,'h');
    // if(x.search(root, 10)){
    //     cout<<"found"<<endl;
    // }
    // else cout<<"not found"<<endl;

    cout<<x.find_max(root)<<endl;
    cout<<x.find_hieght(root)<<endl;
    x.show(root);
    return 0;
}